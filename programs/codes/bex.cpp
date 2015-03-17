    #include"stdio.h"
    #include"queue"
    #include"string.h"
    using namespace std;
    struct node
    {
    int value;
    char S[20];
    };
    typedef struct node Node;
    int main()
    {
    int n,temp,t1,i,min=1000000000,count;
    Node N;
    char S1[20];
    deque<Node> q;
    deque<int> minq;
    deque<int>::iterator it;
    n=read();
    while(n--)
    {
    temp=read();
    if(temp==-1)
    {
    count=0;
    while(q.back().value!=minq.back())
    {
    count++;
    q.pop_back();
    minq.pop_back();
    }
    printf("%d %s\n",count,q.back().S);
    q.pop_back();
    minq.pop_back();
    if(!minq.empty()) min=minq.back();
    else min=1000000000;
    }
    else if(temp==0)
    {
    getchar();
    scanf("%s",S1);
    }
    else
    {
    getchar();
    scanf("%s",S1);
    N.value=temp;
    strcpy(N.S,S1);
    q.push_back(N);
    if(temp<min) minq.push_back(temp);
    else minq.push_back(min);
    if(!minq.empty()) min=minq.back();
    else min=1000000000;
    }
    }
    return 0;
    } 