/* bhupkas */

#include"iostream"
#include"stdio.h"
#include"algorithm"

using namespace std;

typedef long long LL;

int main()
	{
		int ew,eh,w,h,i,j;
		LL ans=0;
		scanf("%d %d",&w,&h);
		ew=max(w,h);
		eh=min(w,h);
		if(w<2 || h<2)
			{
				cout<<"0"<<endl;	return 0;
			}
		for(i=2;i<=eh;i+=2)
			{
				for(j=2;j<=ew;j+=2)
					{
						if(eh-i>=0 && ew-j>=0)
							{
								ans+=(LL)(eh-i+1)*(ew-j+1);	
							}
					}
			}
		cout<<ans<<endl;
		return 0;
	}