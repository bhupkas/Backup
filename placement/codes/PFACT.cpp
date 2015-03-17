using namespace std;

#include "bits/stdc++.h"

int A[100005];

void pre()
{       
        for(int i = 1 ; i < 100005 ; ++i)       A[i] = i;
        A[1] = 1;
        for(int i = 2 ; i * i <= 100000 ; ++i)
        {
                if(A[i] == i)
                {
                        for(int j = i ; j <= 100000/i ; ++j)
                        {
                                A[i*j] = min(A[i*j],i);
                        }
                }                
        }
}

int main()
{
        pre();
        set < int > s;
        set < int > :: iterator it;
        int j;
        for(int i = 2 ; i <= 100000 ; ++i)
        {
                s.clear();
                j = i;
                while(j != 1)
                {
                        s.insert(A[j]);
                        j = j / A[j];
                }
                printf("%d: ",i);
                for(it = s.begin() ; it != s.end() ; it++)      printf("%d ",*it);
                printf("\n");
        }
        return 0;
}
