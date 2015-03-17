#include <bits/stdc++.h>
using namespace std;

int dp[20][110],a[110],p,m;
int sum[110];
int solve(int x,int id){
        if(dp[x][id]!=-1) return dp[x][id];
        if(x==1){
                return dp[x][id] = sum[p-1]-sum[id]+a[id];
        }
        int ans=1e9;
        for(int j=id;j<p;++j){
                ans = min(solve(x-1,j),sum[j-1]-sum[id]+a[id]);
        }
        return dp[x][id]=ans;
}

int main(){
        cin>>m>>p;
        for(int i=0;i<p;++i) cin>>a[i];
        sum[0] = a[0];
        for(int i=1;i<p;++i) sum[i] = sum[i-1]+a[i];
        for(int i=0;i<m;++i)
                for(int j=0;j<p;++j)
                        dp[i][j]=-1;
        cout<<solve(m,0)<<endl;         
        
}
