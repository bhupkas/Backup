/* bhupkas */

#include "iostream"
#include "stdio.h"
#include "stdlib.h"

using namespace std;

#define FOR(i,a,b)		for(i=a;i<b;i++)

struct node	{
	int num;
	struct node * next;
};

typedef struct node Node;

Node * insert(Node * head,int num)	{
	Node *t, *t1;
	t=head;
	t1=(Node*)malloc(sizeof(Node));
	t1->num=num;
	t1->next=NULL;
	if(head == NULL)	return t1;
	while(t->next!=NULL)	t=t->next;
	t->next=t1;
	return head;
}

void merge(Node * head1, int n1, Node *head2, int n2)	{
	Node *t1,*t2,*t3;
	t1 = head1;
	t2 = head2;
	bool flag = true;
	while (t1!=NULL && t2!=NULL)	{
		if(flag)	{
			if(t1->next == NULL)	{
				t1->next = t2;
				t2 = t2->next;
				t1->next->next = NULL;
			}
			else	{
				t3 = t1->next;
				t1->next = t2;
				t2 = t2->next;
				t1->next->next = t3;
			}
		}
		t1 = t1->next;
		flag = !flag;
	}
	while(head1 != NULL)	{
		cout<<head1->num<<" ";
		head1 = head1->next;
	}
	cout<<endl;
	head2 = t2;
	while(head2 != NULL)	{
		cout<<head2->num<<" ";
		head2 = head2->next;
	}
	cout<<endl;
}

int main()	{
	int n1,n2,i,j,temp;
	Node *head1, *head2, *head;
	head1 = NULL;
	head2 = NULL;
	cin>>n1;
	FOR(i,0,n1)	{
		cin>>temp;
		head1=insert(head1,temp);	
	}
	cin>>n2;
	FOR(i,0,n2)	{
		cin>>temp;
		head2=insert(head2,temp);
	}
	merge(head1,n1,head2,n2);
	return 0;
}