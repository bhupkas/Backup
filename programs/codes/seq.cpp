#include"stdio.h"
#include"vector"
using namespace std;
typedef long long int LL;
int main()
	{
		vector<LL> v;
		LL t,n;
		int i=0;
		LL sum=0;
		v.push_back(0);
		i=1;
		while(sum<=1e13)
			{
				sum+=i;
				v.push_back(sum);
				i++;
			}
		scanf("%lld",&t);
		while(t--)
		{
			i=1;
			scanf("%lld",&n);
		}
		return 0;
	}