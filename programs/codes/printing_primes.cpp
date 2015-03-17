#include"stdio.h"
#include"vector"
using namespace std;
int main()
	{
		int i,j,count;
		bool A[100000000];
		for(i=0;i<100000000;i++)	A[i]=true;
		for(i=2;i<10000;i++)
		{
			if(A[i])
			{
				for(j=i;j<100000000/i;j++)
				{
					A[i*j]=false;
				}
			}
		}
		for(i=2;i<100000000;i++)
		{
			if(A[i])
			{
				count++;
				if(count%100==1)
					printf("%d\n",i);
			}
		}
 		return 0;
	}