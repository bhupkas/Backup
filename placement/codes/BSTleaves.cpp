/* bhupkas */

using namespace std;

#include "bits/stdc++.h"

struct node
{
	int val;
	struct node * left , *right;
};

typedef struct node Node; 

Node * makenode(int val)
{
	Node * re;
	re = (Node*)malloc(sizeof(Node));
	re -> val = val;
	re -> left = NULL;
	re -> right = NULL;
	return re;
}

vector < int > v;

void print_path_of_leaves(Node * root)
{
	if(root -> left == NULL && root -> right == NULL) 	
	{
		for(int i = 0 ; i < v.size() ; ++i)
		{
			if(v[i])	cout << "R ";
			else		cout << "L ";
		}
		cout << endl;
		return;
	}
	if(root -> left != NULL)
	{
		v.push_back(0);
		print_path_of_leaves(root -> left);		
		v.pop_back();
	}
	if(root -> right != NULL)	
	{
		v.push_back(1);
		print_path_of_leaves(root -> right);		
		v.pop_back();
	}
}

int main()
{
	v.clear();
	Node * head;
	head = makenode(2);
	head -> left = makenode(2);
	head -> right = makenode(2);
	head -> left -> left = makenode(2);
	head -> left -> right = makenode(2);
	print_path_of_leaves(head);	
	return 0;
}
