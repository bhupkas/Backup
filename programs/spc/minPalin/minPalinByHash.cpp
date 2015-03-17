#include <vector>
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdio>
#include <map>
#include <algorithm>
#include <cstring>

#define INF 100000000000000000LL
using namespace std;
#define N 10000
string s,t;
int hsh1[N+5],hsh2[N+5],p[N+5],memo[N+5],n,mod=1000000007;
#define hash1(i,j) (hsh1[(j)]-hsh1[(i)-1]*p[(j)-(i)+1])
#define hash2(i,j) (hsh2[(j)]-hsh2[(i)-1]*p[(j)-(i)+1])

int isPalin(int left,int right){
    if(hash1(left,right)==hash2(n-right+1,n-left+1))return true;
    return false;
}

int dp(int pos){
    int &res=memo[pos];
    if(res==-1){
        res=0;
        if(pos>n){
            res=0;
        }else{
            res=n-pos+1;
            for(int i=pos;i<=n;i++){
                if(isPalin(pos,i)){
                    res=min(res,dp(i+1)+1);
                }
            }
        }
    }
    return res;
}

int main(){
	int T;
	cin>> T;
	while (T--){
		cin>>t;
		s=t;
		reverse(t.begin(),t.end());
		n=s.size();
		s='a'+s;
		t='a'+t;
		//cout<<s<<" "<<t<<endl;
		hsh1[0]=0;p[0]=1;
		for(int i=1;i<=n;i++){
		    p[i]=p[i-1]*mod;
		    hsh1[i]=hsh1[i-1]*mod+s[i];
		}
		for(int i=1;i<=n;i++)
		    hsh2[i]=hsh2[i-1]*mod+t[i];
		//for(int i=1;i<=n;i++)cout<<hsh1[i]<<" ";
		//cout<<endl;
		//for(int i=1;i<=n;i++)cout<<hsh2[i]<<" ";
		//cout<<endl;
		/*for(int i=1;i<=n;i++){
		    for(int j=i;j<=n;j++){
		        if(isPalin(i,j)){
		            string r="";
		            for(int k=i;k<=j;k++)r+=s[k];
		            cout<<r<<endl;
		            cout<<"i : j"<<i<<" "<<j<<endl;
		        }
		    }
		}*/
		memset(memo,-1,sizeof(memo));
		int ans=dp(1);
		cout<<ans<<endl;
	}
}

