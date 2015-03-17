#include"stdio.h"
#include"iostream"
using namespace std;
typedef long long LL;
int main()
	{
	LL n,m,a;
	LL ans=0,v1,v2;
	cin>>n>>m>>a;
	v1 = n - n%a;
	v2 = m - m%a;
	ans = (v1 *v2)/(a*a);
	if(v1!=n)
		ans += m/a;
	if(v2!=m)
		ans += n/a;
	if(v1!=n && v2!=m)	ans++;
	cout<<ans<<endl;
	return 0;
	}
