#include"iostream"
#include"stdio.h"
#include"algorithm"
#include"vector"
using namespace std;
typedef long long LL;
LL fact(LL a)
	{
		if(a==0||a==1)	return 1;
		return a*fact(a-1);
	}
LL comb(LL a,LL b)
	{
		if(b<0 || a<0)	return 0;
		if(b>a)	return 0;
		b=min(b,a-b);
		if(b==0)	return 1;
		LL i,j,re=1;
		for(i=0;i<b;i++)
			{
				re = (re * (a-i))/(i+1);
			}
		return re;
	}
int main()
	{
		LL t,n,s,m,k,a,b,t1,t2,t3,i;
		cin>>t;
		double ans;
		while(t--)
			{
				cin>>s>>n>>m>>k;
				s--;n--;m--;
				if(s==n)	{cout<<"1.000000"<<endl;continue;}
				if(n<k)	{cout<<"0.000000"<<endl;continue;}
				ans=0;
				t1=(double)comb(m,k);t2=(double)comb(s-m,n-k);t3=(double)comb(s,n);
				if(t1==0 || t2==0)	{cout<<"0.000000"<<endl;continue;}
				//cout<<t1<<" "<<t2<<" "<<t3<<endl;
				for(i=k;i<=m && i<=n ;i++)
					{
						ans+=(double)(t1*t2)/(double)t3;
						t1=(t1*(m-i))/(i+1);
						t2=(t2*(n-i))/(s-m-n+i+1);
					}
				printf("%0.12lf\n",ans);
				
			}
		return 0;
	}