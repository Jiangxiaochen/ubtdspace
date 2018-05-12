#include "jxcutils.h"
#include <assert.h>

#define NAME_LEN 25
#define MAX_PARTS 100

struct part
{
	int number;
	char name[NAME_LEN+1];
	int on_hand;
} inventory[MAX_PARTS];

int num_parts;

int main(void)
{
	FILE *fp;
	int i;
	assert(fp=fopen("invent.dat","rb+"));
	

	struct part tmp;
	tmp.on_hand = 0;
	fwrite(inventory, sizeof(struct part), 1, fp);
	num_parts = fread(inventory, sizeof(struct part), MAX_PARTS, fp);

	for(i = 0; i < num_parts; i++) inventory[i].on_hand = 1;

	rewind(fp);
	fwrite(inventory, sizeof(struct part), num_parts, fp);
	fclose(fp);
	return 0;
}
