#include <cstdio>
#include <map>
using namespace std;
typedef long long int ll;
int main()
{
	ll t, n, x,s,c;
	scanf("%lld", &t);
	map<long long,int> m;
	while(t--)
	{
		scanf("%lld", &n);
		m.clear();
		s=0;
		c=0;
		m[0]=1;
		while(n--)
		{
			scanf("%lld", &x);
			s=s+x;
			c=c+m[s-47];
			m[s]++;
		}
		printf("%lld\n",c);
	}
	return 0;
}

