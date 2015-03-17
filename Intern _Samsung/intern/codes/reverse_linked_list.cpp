/* bhupkas */

#include "iostream"
#include "stdio.h"
#include "algorithm"
#include "stdlib.h"

using namespace std;

#define FOR(i,a,b)		for(i=a;i<b;i++)

struct node
	{
		int num;
		struct node *next;
	};
typedef struct node Node;

Node * insert(int num, Node *head)
	{
		Node * t1;
		t1=(Node*)malloc(sizeof(Node));
		t1->num=num;
		t1->next=NULL;
		if(head==NULL)	return t1;
		Node * t2;
		t2=head;
		while(t2->next!=NULL)	t2=t2->next;
		t2->next=t1;
		return head;
	}

Node * reverse(Node *head)
	{
		Node *t1,*t2,*t3;
		if(head==NULL || head->next==NULL)	return head;
		t2=head->next;
		t1=head;
		t1->next=NULL;
		while(t2->next!=NULL)
			{
				t3=t1;
				t1=t2;
				t2=t2->next;
				t1->next=t3;
			}
		t2->next=t1;
		return t2;
	}

int main()
	{
		int n,i,j,num;
		cin>>n;
		Node *head=NULL;
		FOR(i,0,n)		
			{
				cin>>num;
				head=insert(num,head);
			}
		head=reverse(head);
		while(head!=NULL)
			{
				cout<<head->num<<" ";
				head=head->next;
				cout<<endl;
			}
		return 0;
	}