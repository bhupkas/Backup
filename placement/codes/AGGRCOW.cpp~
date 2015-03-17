using namespace std;

#include "bits/stdc++.h"

int A[100005];

int n,c;

bool check(int num)
{
        int prev = A[0];
        int cnt = 1;
        for(int i = 1 ; i < n ; ++i)
        {
                if(A[i] - prev >= num)
                {
                        cnt++;
                        if(cnt == c)    return true;
                        prev = A[i];
                }
        }
        return false;       
}

int fun()
{
        int l = 0;
        int r = A[n-1];
        int re = -1;
        while(l <= r)
        {
                int mid = (l+r)/2;
                if(check(mid))  re = max(re,mid) , l = mid+1;
                else    r = mid-1;
        }
        return re;
}

int main()
{
        int t;
        cin >> t;
        while(t--)
        {
                scanf("%d %d",&n,&c);
                for(int i = 0 ; i < n ; ++i)    scanf("%d",&A[i]);
                sort(A,A+n);
                printf("%d\n",fun());
        }
        return 0;
}
