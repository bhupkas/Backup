using namespace std;

#include "bits/stdc++.h"

struct node
{
        int val;
        struct node * left , *right;
};

typedef struct node Node;

Node * create(int val)
{
        Node * re ;
        re = (Node*)malloc(sizeof(Node));
        re -> val = val;
        re -> left = re -> right = NULL;
        return re;
}

int num;

bool foo;

int k;

void inorder(Node * root)
{
        if(foo) return;
        if(!root)       return;
        inorder(root -> left);
        if(num == k - 1)
        {
               cout << root -> val << endl;
               foo = true;
               return; 
        }
        num++;
        inorder(root -> right);
}

int main()
{
        foo = false;       
        Node *head;
        num = 0;
        head = create(10);
        head -> left = create(5);
        head -> right = create(15);
        k = 3;
        inorder(head);
        return 0;
}