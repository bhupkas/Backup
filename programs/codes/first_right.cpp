/* bhupkas */

using namespace std;

#include "bits/stdc++.h"

struct node 
{
        int val;
        struct node * left;
        struct node * right;
        struct node * parent;
};

typedef struct node Node;

Node * head;

Node * newNode(int val , Node * p)
{
        Node * re;
        re = (Node*)malloc(sizeof(Node));
        re -> val = val;
        re -> left = re -> right =  NULL;
        re -> parent  = p;
        return re;
}

Node * check(Node * root , int cnt)
{
        if(root == NULL)        return NULL;
        if(cnt == 0)    return root;
        if(cnt < 0)     return NULL;
        Node * t1 , * t2;
        t1 = check(root -> left , cnt - 1);
        t2 = check(root -> right , cnt - 1);
        if(t1) return t1;
        if(t2)  return t2;
        return NULL;
}

Node * recur(Node * a , int cnt)
{
        Node * p;
        p = a -> parent;
        cnt++;
        while(p && a == p -> right)
        {
                a = p;
                p = a -> parent;
                cnt++;
        }
        if(!p)  return NULL;
        Node * t1;
        t1 = check(p -> right , cnt - 1);
        if(t1)  return t1;
        recur(p,cnt);
}

Node * fun(Node * a)
{
        return recur(a,0);
}

void inorder(Node * root)
{
        if(!root)       return;
        inorder(root -> left);
        cout << root -> val << endl;
        inorder(root -> right);
}

int main()
{
        Node *t1,*t2;
        t2 = NULL;
        head = newNode(1,t2);
        head -> left = newNode(2,head);
        head -> right = newNode(3,head);        
        head -> left -> left = newNode(4,head -> left);
        head -> left -> right = newNode(5,head -> left);
        head -> right -> left = newNode(6,head -> right);
        head -> right -> right = newNode(7,head -> right);
        inorder(head);
        cout << fun(head -> right -> left) -> val << endl;
        return 0;
}