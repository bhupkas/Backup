using namespace std;

#include "iostream"
#include "stdlib.h"

struct node 
{
        int x;
        int y;
        struct node * next;
};

typedef struct node Node;

Node * create(int x , int y)
{
        Node * re;
        re = (Node*)malloc(sizeof(Node));
        re -> x = x;
        re -> y = y;
        re -> next = NULL;
        return re;
}

int x1,y1,x2,y2,x3,y3;

Node * remo(Node *head)
{
        if(!head || !head -> next)      return head;
        Node *t1,*t2,*t3;
        t1 = head;
        t2 = head -> next;
        t3 = head -> next -> next;
        if(!t3) return head;
        x1 = t1 -> x;
        y1 = t1 -> y;
        x2 = t2 -> x;
        y2 = t2 -> y;
        x3 = t3 -> x;
        y3 = t3 -> y;
        while(t3)
        {
                if((x1 == x2 && x1 == x3) || (y1 == y2 && y1 == y3))
                {
                        t1 -> next = t3;
                        t2 = t3;
                        t3 = t3 -> next;
                        x1 = x2;
                        y1 = y2;
                        x2 = x3;
                        y2 = y3;
                        if(!t3) return head;
                        x3 = t3 -> x;
                        y3 = t3 -> y;
                }
                else
                {
                        t1 = t2;
                        t2 = t3;
                        t3 = t3 -> next;
                        x1 = x2;
                        y1 = y2;
                        x2 = x3;
                        y2 = y3;
                        if(!t3) return head;
                        x3 = t3 -> x;
                        y3 = t3 -> y;       
                }
        }
        return head;
}

int main()
{
        Node * head ,*t1;
        head = create(2,3);
        t1 = head;
        t1 -> next = create(2,5);
        t1 = t1 -> next;
        t1 -> next = create(2,5);
        t1 = t1 -> next;
        t1 -> next = create(3,5);
        t1 = t1 -> next;
        t1 -> next = create(4,5);
        t1 = t1 -> next;
        t1 -> next = create(5,5);
        t1 = t1 -> next;
        head = remo(head);
        t1 = head;
        while(t1)
        {
                cout << t1 -> x << " " << t1 -> y << endl;
                t1 = t1 -> next;
        }
        return 0;
}
