typedef long data_t;

typedef struct 
{
	long len;
	data_t *data;
}vec_rec, *vec_ptr;

#define IDENT 0
#define OP +

#define NULL 0