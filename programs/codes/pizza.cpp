#include"stdio.h"
#include"iostream"
#include"algorithm"
#include"string.h"
using namespace std;
int main()
	{
		int n,A[3];
		A[0]=A[1]=A[2]=0;
		cin>>n;
		char c1,c2;
		getchar();
		char S[10];
		while(n--)
		{
			gets(S);
			gets(S);
			c1=(char)getchar();
			getchar();
			c2=(char)getchar();
			getchar();
			if(c1=='1' && c2=='2')	A[0]++;
			if(c1=='3' && c2=='4')	A[1]++;
			if(c1=='1' && c2=='4')	A[2]++;
		}
		int ans=0;
		ans= (A[0]/2 + A[0]%2 +max(A[1],A[2]) +1);
		cout<<ans<<endl;
		return 0;
	}