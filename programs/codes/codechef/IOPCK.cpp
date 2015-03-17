#include"iostream"
#include"stdio.h"
#include"vector"
#include"map"
#include"algorithm"
using namespace std;
typedef long long LL;
map<LL,LL> my;
LL HCF(LL a,LL b)
	{
	if(b>a)		swap(a,b);
	if(b==0)	return a;
	return HCF(b,a%b);
	}
pair<LL, pair<LL, LL> > extendedEuclid(LL a, LL b) {
	    if(a == 0) return make_pair(b, make_pair(0, 1));
	    pair<LL, pair<LL, LL> > p;
	    p = extendedEuclid(b % a, a);
	    return make_pair(p.first, make_pair(p.second.second - p.second.first*(b/a), p.second.first));
	}
LL modInverse(LL a, LL m) { return (extendedEuclid(a,m).second.first + m) % m;	}	
void pre()
	{
	bool P[31120];
	LL i,j;
	for(i=0;i<31120;i++)	P[i]=true;
	P[0]=P[1]=false;
	for(i=2;i*i<31120;i++)
		{
		if(P[i])
			{
			for(j=i;j<=31120/i;j++)	P[i*j]=false;
			}
		}
	vector<LL> v;
	for(i=0;i<31120;i++)	if(P[i])	v.push_back(i);
	LL si=v.size();
	LL hhh,ans=0;
	LL curr,te1,te2,te3,sq,ss;
	//for(i=0;i<50;i++)
		{
	i=0;
		sq=v[i]*v[i];
		curr=1;
		ans=1;
		for(j=0;j<v[i];j++)
			{
			te1=(v[i]+j+1)*(v[i]-j);
			ss=(j+1)*(j+1);
			while(HCF(te1,ss)!=1)
			{
				hhh=HCF(te1,ss);
				te1/=hhh;
				ss/=hhh;
			}
			te1=(te1*(modInverse(ss,sq)%sq)) % sq;
			curr = (curr * te1)%sq;
			cout<<curr<<" ";	
			ans = (ans + curr )%sq;
			}
		my[v[i]]=ans%sq;
		}
	//cout<<modInverse(4,4);
	//for(i=0;i<50;i++)
	//	cout<<my[v[i]]<<" ";
	//cout<<endl;
	}	
int main()	
	{
	pre();
	LL t,n;
	//scanf("%lld",&t);
	t=0;
	while(t--)
		{
		scanf("%lld",&n);
		if(my[n]==0)	printf("%lld\n",n*n);
		else		printf("%lld\n",my[n]);
		}
	return 0;
	}
