using namespace std;

#include "bits/stdc++.h"

int P[1000005];

void pre()
{
        for(int i = 0 ; i < 1000005 ; ++i)      P[i] = i;
        for(int i = 2 ; i < 1000005 ; ++i)
        {
                if(P[i] == i)
                {
                        for(int j = i ; j < 1000005 ; j += i)
                        {       
                                P[j] = (P[j]/i) * (i-1);
                        }
                }
        }
}

int main()
{       
        pre();
        int t;
        cin >> t;
        int n;
        while(t--)
        {
              cin >> n;
              cout << P[n] << endl;  
        }
        return 0;
}
