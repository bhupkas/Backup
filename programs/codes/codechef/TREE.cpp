#include"iostream"
#include"stdio.h"
#include"vector"
#include"algorithm"
using namespace std;
typedef long long LL;
#define MOD (LL)(1e9+7)
long long mulmod(long long a,long long b,long long c){
    long long x = 0,y=a%c;
    while(b > 0){
        if(b%2 == 1){
            x = (x+y)%c;
        }
        y = (y*2)%c;
        b /= 2;
    }	
    return x%c;
}
long long int expon(long long int a,long long int n,long long int p){ //a^n%p
long long int extra=1,aa=a;
while(n>0){
if(n%2==1){
extra=mulmod(extra,aa,p);
n--;
}
else{
aa=mulmod(aa,aa,p);
n=n>>1;
}
}
return extra;
}
int main()
	{
		LL n,k,ans=1,N,i,j;
		cin>>n>>k;
		N=n*k;
		ans=expon(N,n-2,MOD)%MOD; 
		ans=(ans*expon(N-k,N-n,MOD)%MOD)%MOD;
		cout<<(ans+MOD)%MOD<<endl;
		return 0;	
	}