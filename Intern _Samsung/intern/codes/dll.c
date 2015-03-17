#include "stdio.h"
#include "stdlib.h"

#define S(n)		scanf("%d",&n)

struct node	{
	int num;
	struct node * prev;
	struct node * next;
};

typedef struct node Node;

Node * insertion(int num,Node* head)	{
	Node *t1,*t2,*t3;
	t1=(Node*)malloc(sizeof(Node));
	t1->num = num;
	if(head == NULL)	{
		t1->next = NULL;
		t1->prev = NULL;
		return t1;
	}
	t2 = head;
	while(t2!=NULL && t2->num < num)	{
		t3=t2;
		t2=t2->next;
	}
	if(t2==NULL)	{
		t3->next=t1;
		t1->prev=t3;
		t1->next= NULL;
		return head;	
	}
	if(t2==head)	{
		t1->next=t2;
		t2->prev=t1;
		t1->prev=NULL;
		return t1;
	}
	t1->next=t3->next;
	t1->prev=t3;
	t2->prev=t1;
	t3->next=t1;
	return head;
}

int main()	{
	int i,temp,n;
	S(n);
	Node * head;
	head = NULL;
	for(i=0;i<n;i++)	S(temp),head = insertion(temp,head);
	while(head!=NULL)	{
		printf("%d ",head->num);
		head = head->next;
	}
	return 0;
}