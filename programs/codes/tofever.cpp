#include"stdio.h"
using namespace std;
int inphi[1000000];
int phi[7000000];
void pre()
	{
		int i,j;
		for(i=1;i<7000000;i++) phi[i]=i;
		for(i=2;i<7000000;i++)
			if(phi[i]==i)
				for(j=i;j<7000000;j+=i)
					phi[j]=(phi[j]/i)*(i-1);
	}
int main()
	{
		pre();
		printf("%d\n",phi[599999]);
		return 0;
	}