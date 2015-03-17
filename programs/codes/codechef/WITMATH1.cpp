#include"iostream"
#include"stdio.h"
#include"algorithm"
#include"vector"
#include"string.h"
#include"math.h"
using namespace std;
typedef long long LL;
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
inline bool Miller(long long p,int iteration){
    if(p<2){
        return false;
    }
    if(p==2||p==3||p==5||p==7||p==11||p==13||p==17||p==19||p==23)	return true;
if(p%3==0||p%5==0||p%7==0||p%11==0||p%13==0||p%17==0||p%19==0||p%23==0)	return false;
    if(p!=2 && p%2==0){
        return false;
    }
    long long s=p-1;
    while(s%2==0){
        s/=2;
    }
    for(int i=0;i<iteration;i++){
        long long a=rand()%(p-1)+1,temp=s;
        long long mod=expon(a,temp,p);
        while(temp!=p-1 && mod!=1 && mod!=p-1){
            mod=mulmod(mod,mod,p);
            temp *= 2;
        }
        if(mod!=p-1 && temp%2==0){
            return false;
        }
    }
    return true;
}
int main()
	{
		LL t,n,i;
		scanf("%lld",&t);
		while(t--)
			{
				scanf("%lld",&n);
				if(n==2)	{printf("2\n");	continue;}
				if(n%2==0)	n--;
				for(i=n;i>0;i-=2)
				{
					if(Miller(i,5))	{printf("%lld\n",i);	break;}
				}
			}
		return 0;
	}