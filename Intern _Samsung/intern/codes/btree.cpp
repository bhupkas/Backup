/* bhupkas */

#include "iostream"
#include "stdio.h"
#include "stdlib.h"

using namespace std;

#define FOR(i,a,b)		for(i=a;i<b;i++)

struct node	{
	int num;
	struct node * left;
	struct node * right;
	struct node *parent;
};

typedef struct node Node;

Node * insert_tree(int num, Node * head)	{
	Node *t1, *t2, *t3;
	t1 = (Node *) malloc (sizeof(Node));
	t1 -> num = num;
	t1 ->left = NULL;
	t1 -> right = NULL;
	t1 ->parent = NULL;
	if(head == NULL)	return t1;
	t2 = head;
	while (t2 != NULL)	{
		t3 = t2;
		if(num < t2->num)	{
			t2 = t2->left;
		}
		else	{
			t2 = t2->right;
		}
	}
	if(num < t3->num)	t3->left = t1;
	else				t3->right = t1;
	t1-> parent = t3;
	return head;	
}

void print(Node * head)	{
	if(head == NULL)	return;	
	print(head->left);
	cout<<head->num<<endl;
	print(head->right);
}

Node * maximu(Node * head)	{
	while(head -> right != NULL)	head = head->right;
	return head;
}

Node * minimu(Node * head)	{
	while(head -> left != NULL)		head = head->left;
	return head;
}

Node * succ(Node * t)	{
	Node *t1;
	if(t->right != NULL)	{
		return minimu(t->right);
	}
	t1 = t->parent;
	while (t1 != NULL && t1->right == t)	{
		t = t1;
		t1 = t1->parent;
	}
	return t1;
}

Node * pred(Node * t)	{
	Node *t1;
	if(t->left != NULL)	
		return maximu(t->left);
	t1 = t->parent;
	while(t1 != NULL && t == t1->left)	{
		t = t1;
		t1 = t1->parent;
	} 
	return t1;
}

Node * search(Node *head, int num)	{
	if(head -> num == num)	return head;
	if(num < head->num)		return search(head->left,num);
	else					return search(head->right,num);
}

int main()	{
	Node * head, *t1, *t2, *t3;
	head = NULL;
	int m,n,i,j,temp,te;
	cin>>n>>m;
	FOR(i,0,n)	{
		cin>>temp;
		head = insert_tree(temp,head);
	}
	print(head);
	FOR(i,0,m)	{
		cin>>te;
		t1 = search(head,te);
		t2 = succ(t1);
		t3 = pred(t1);
		if(t3 != NULL)	cout<<t3->num<<" ";
		else	cout<<" ";
		cout<<t1->num<<" ";
		if(t2 != NULL)	cout<<t2->num<<" ";
		else	cout<<" ";
		cout<<endl; 
	}
	return 0;
}