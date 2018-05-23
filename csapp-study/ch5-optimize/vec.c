#include "vec.h"

vec_ptr new_vec(long len)
{
	vec_ptr result = (vec_ptr) malloc(sizeof(vec_rec));
	data_t *data = NULL;
	if(!result) return NULL;
	result->len = len;
	if(len > 0)
	{
		data = (data_t*)calloc(len,sizeof(data_t));
		if(!data)
		{
			free((void *)result);
			return NULL;
		}
	}
	result->data = data;
	return result;
}

int get_vec_element(vec_ptr v, long index, data_t *dest)
{
	if(index < 0 || index >= v->len) return 0;
	*dest = v->data[index];
	return 1;
}

long vec_length(vec_ptr v)
{
	return v->len;
}

void combine1(vec_ptr v, data_t *dest)
{
	long i;
	*dest = IDENT;
	for (i = 0; i < vec_length(v); ++i)
	{
		data_t val;
		get_vec_element(v,i,&val);
		*dest = *dest OP val;
	}
}

void combine2(vec_ptr v, data_t *dest)
{
	long i;
	long length = vec_length(v);
	*dest = IDENT;
	for(i = 0; i < length; i++)
	{
		data_t val;
		get_vec_element(v,i,&val);
		*dest = *dest OP val;
	}
}


data_t *get_vec_start(vec_ptr v)
{
	return v->data;
}

void combine3(vec_ptr v, data_t *dest)
{
	long i;
	long length = vec_length(v);
	data_t *data = get_vec_start(v);
	*dest = IDENT;
	for(i = 0; i < length; i++)
	{
		*dest = *dest OP data[i];
	}
}

void combine4(vec_ptr v, data_t *dest)
{
	long i;
	long length = vec_length(v);
	data_t *data = get_vec_start(v);
	data_t acc = IDENT;
	for(i = 0; i < length; i++)
	{
		acc = acc OP data[i];
	}
	*dest = acc;
}


void combine5(vec_ptr v, data_t *dest)
{
	long i;
	long length = vec_length(v);
	long limit = length - 1;
	data_t *data = get_vec_start(v);
	data_t acc = IDENT;

	for(i = 0; i < limit; i += 2)
	{
		acc = (acc OP data[i]) OP data[i+1];
	}

	for(; i < length; i++)
	{
		acc = acc OP data[i];
	}

	*dest = acc;
}

void combine6(vec_ptr v, data_t *dest)
{
    long i;
    long length = vec_length(v);
    long limit = length - 1;
    data_t *data = get_vec_start(v);
    data_t acc0 = IDENT;
    data_t acc1 = IDENT;
    
    for(i = 0; i < limit; i += 2)
    {
        acc0 = acc0 OP data[i];
        acc1 = acc1 OP data[i+1];
    }
    
    for(;i < length; i++)
    {
        acc0 = acc0 OP data[i];
    }
    
    *dest = acc0 OP acc1;
}

int main(int argc, char const *argv[])
{
	vec_ptr v = new_vec(100000);
	data_t s1,s2,s3,s4,s5,s6;
	combine1(v,&s1);
	combine2(v,&s2);
	combine3(v,&s3);
	combine4(v,&s4);
	combine5(v,&s5);
	combine6(v,&s6);
	data_t s0 = s1 + s2 + s3 + s4 + s5 + s6;
	return 0;
}