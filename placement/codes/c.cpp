using namespace std;

#include "bits/stdc++.h"

struct node
{
        int a;
        int b;
};

typedef struct node Node;

class compare
{
        public :
        bool operator()(Node A , Node B)
        {
                return A.a > B.a;
        }
};

int main()
{
        priority_queue < Node , vector < Node > , compare > pq;
        Node N;
        N.a = 10;
        N.b = 20;
        pq.push(N);
        N.a = 3;
        pq.push(N);
        cout << pq.top().a << endl;
        return 0;
}
