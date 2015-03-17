/* bhupkas */

#include "iostream"
#include "stdio.h"

using namespace std;

#define FOR(i,a,b)		for(i=a;i<b;i++)

int main()	{
	int n,m,i,j,t;
	cin>>t;
	while(t--)	{
		cin>>n>>m;
		if(n==1 || m==1) {
      cout<<(n+m-1)<<endl ; 
   }
   else if((n&1)&&(m&1)) {
    cout<<(n*m)<<endl;
   }
   else if(n&1) {
       cout<<((n*m)-((n-2)*(m-2)))<<endl;
    }
   else {
     cout<<(n*2)<<endl;
   }
	}
	return 0;
}