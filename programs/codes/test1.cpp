#include"stdio.h"
#include"stdlib.h"
using namespace std;
struct node 
{
	int o;
	struct node *next;
};
typedef struct node Node;
Node* add_new(int a,Node *head)
	{
		Node *t1;
		t1=(Node*)malloc(sizeof(Node));
		t1->o=a;
		if(head==NULL)
			{
				t1->next=NULL;
				return t1;
			}
		t1->next=head;
		return t1;
	}	
int main()
	{
		Node *head;
		head=NULL;
		head=add_new(56,head);
		head=add_new(23638165,head);
		head=add_new(34,head);
		while(head!=NULL)
			{
				printf("%d\n",head->o);
				head=head->next;
			}
		return 0;
	}