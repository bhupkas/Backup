/* bhupkas */

using namespace std;

#include "bits/stdc++.h"

struct node
{
	int val;
	struct node * left;
	struct node * right;
};

typedef struct node Node;

Node * newNode(int val)
{
	Node * re ;
	re = (Node *)malloc(sizeof(Node));
	re -> val = val;
	re -> left = NULL;
	re -> right = NULL;
}

Node * converter(Node * root)
{
	if(root == NULL)	return NULL;
	Node * L , * R;
	if(root -> left != NULL)
	{
		L = converter(root -> left);
		while(L -> right != NULL)	L = L -> right;
		L -> right = root;
		root -> left = L;
	}
	if(root -> right != NULL)
	{
		R = converter(root -> right);
		while(R -> left != NULL)	R = R -> left;
		R -> left = root;
		root -> right = R;
	}
	return root;
}

int main()
{
	Node *root        = newNode(10);
	root->left        = newNode(12);
	//root->right       = newNode(15);
	root->left->left  = newNode(25);
	//root->left->right = newNode(30);
	//root->right->left = newNode(36);
	
	Node * head = converter(root);
	while(head -> left != NULL)	head = head -> left;
	while(head != NULL)	cout << head -> val << " " , head = head -> right;
	cout << endl;
	return 0;
}
