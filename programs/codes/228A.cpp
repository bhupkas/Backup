#include"stdio.h"
#include"algorithm"
using namespace std;
int main()
	{
		int ans=0,A[4],i;
		scanf("%d %d %d %d",&A[0],&A[1],&A[2],&A[3]);
		sort(A,A+4);
		if(A[0]==A[1])	ans++;
		if(A[1]==A[2])	ans++;
		if(A[2]==A[3])	ans++;
		printf("%d\n",ans);
		return 0;
	}