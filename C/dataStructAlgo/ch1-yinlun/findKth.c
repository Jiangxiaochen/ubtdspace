#include "jxcutils.h"

#define N 100000000 //list:0 qsort:33  (s)
int comp_ld_d2x(const void *a, const void *b)
{
	long int a1 = *(long int *)a;
	long int b1 = *(long int *)b;
	if(a1 < b1) return 1;
	if(a1 == b1) return 0;
	if(a1 > b1) return -1;
}

int comp_ld_x2d(const void *a, const void *b)
{
	long int a1 = *(long int *)a;
	long int b1 = *(long int *)b;
	if(a1 < b1) return -1;
	if(a1 == b1) return 0;
	if(a1 > b1) return 1;
}

struct node
{
	long int value;
	struct node *next;
};

int main(int argc, char **argv)
{
	long int *data = malloc(sizeof(long int) * N);
	assert(data);
	int k = atoi(argv[1]);
	for(int i = 0; i < N; i++) data[i] = random();
	long int kth;
	clock_t t1 = clock();
#ifdef QSORT
	qsort(data, N, sizeof(long int), comp_ld_d2x);
	kth = data[k-1];
	for(int i = 0; i < k ; i++) printf("%ld ", data[i]);
	printf("\n");
#endif
#ifdef LIST
	qsort(data, k, sizeof(long int), comp_ld_x2d);
	struct node *head = malloc(sizeof(struct node));
	head->value = data[0];
	struct node *cur = head;
	for(int i = 1; i < k; i++){
		cur->next = malloc(sizeof(struct node));
		cur->next->value = data[i];
		cur = cur->next;
	}
	cur->next = NULL;
	cur = head;
	while(cur){
		printf("%ld ",cur->value);
		cur=cur->next;
	}
	printf("\n");
	struct node *tmp;
	struct node *tmp2;
	for(int i = k; i < N; i++){
		cur = head;
		while(data[i] > cur->value){
			tmp2 = cur;
			cur = cur->next;
			if(cur == NULL) break;
		}
		if(cur != head){
			tmp = malloc(sizeof(struct node));
			tmp->value = data[i];
			tmp->next = tmp2->next;
			tmp2->next = tmp;
			//delete head
			tmp = head->next;
			free(head);
			head = tmp;
		}
	}
	kth = head->value;	
	while(head){
		printf("%ld ", head->value);
		head = head->next;
	}
	printf("\n");
#endif
	clock_t t2 = clock();
	printf("kth: %ld; usedTime: %ld\n", kth, (t2-t1)/CLOCKS_PER_SEC);
}
