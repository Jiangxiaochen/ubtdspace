#include "lianbiao.h"
#include "jxcutils.h"

void answer1(Node *);
void answer2(const Node *);
void answer3(const Node *);
void answer4(const Node *);


int main()
{
	Node head;
	Node *pHead = &head;
	for(int i = 0; i < 10; i++){
		Node *tmp = new Node;
		pHead->next = tmp;
		pHead = tmp;
	}
	//pHead->next = head.next->next;
	answer1(&head);
	answer2(&head);
	answer3(&head);
	answer4(&head);
}
//没有限制
void answer1(Node *head)
{
	while(head != 0)
	{
		if(head->data == 1234){
			printf("has loop\n");
			return;
		}
		head->data = 1234;
		head = head->next;
	}
	printf("no loop\n");
}
//只读区域
void answer2(const Node *head)
{
 	const Node **visited = (const Node **)calloc(100,sizeof(const Node *));
	int num = 0;
	while(head != 0)
	{
		for(int i = 0; i < 100; i++){
			if(visited[i] == head){
				printf("has loop\n");
				return;
			}
		}
		if(num == 100){
			printf("visited is too small to contain this list\n");
			return;
		}
		visited[num++] = head;
		head = head->next;
	}
	printf("no loop\n");
}
//内存不够，但是在前N个
void answer3(const Node *head)
{
	int n = 0;
	while(head != 0)
	{
		int m = 20 - n;
		const Node * tmp = head->next;
		while(tmp)
		{
			if(tmp == head){
				printf("has loop\n");
				return;
			}
			tmp = tmp->next;
			m--;
			if(m == 0) break;
		}
		head = head->next;
		n++;
		if(n == 20){
			printf("no loop\n");
			return;
		}
	}
	printf("no loop\n");
}

//任意长度，任意位置
void answer4(const Node *head)
{
	const Node *p1 = head->next;
	const Node *p2 = p1->next;	
	while(p1 != p2){
		if(p1 == 0 or p2 == 0){
			printf("no loop\n");
			return;
		}
		p1 = p1->next;
		p2 = p2->next;
		if(p2 == 0){
			printf("no loop\n");
			return;
		}
		p2 = p2->next;
	}

	printf("has loop\n");


}
