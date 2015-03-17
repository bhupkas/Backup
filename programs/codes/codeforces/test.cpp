#include<algorithm>
#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

#define ll long long

char c;
int ans=0, res, b[5001], s[5001][5001], a[5001][5001], n, m, i, j;

int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
        {
            cin>>c;
            if(c=='1')a[i][j]=1;
            if(a[i][j]==1)s[i][j]=s[i][j-1]+a[i][j];
                     else s[i][j]=0;
        }
    for(i = 1 ; i <= n ; i++)	
    {
    	for(j = 1 ; j <= m ; j++)	cout << s[i][j] << " ";
    	cout << endl;
    }
    for(j=1;j<=m;j++)
    {
        for(i=1;i<=n;i++)
            b[i-1]=s[i][j];
        sort(b, b+n);
        reverse(b, b+n);
        for(i=1;i<=n;i++)
        {
            res=b[i-1];
            ans=max(ans, res*i);
        }
    }
    cout<<ans<<endl;
}
