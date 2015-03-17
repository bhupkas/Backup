/* bhupkas */
#include"iostream"
#include"stdio.h"
#include"string.h"
#include"string"
#include"algorithm"
using namespace std;
int main()
	{
		int t,n,i,j;
		int C1[26],C2[26];
		string A,B,AB,CS,C[4001];
		cin>>t;
		while(t--)
			{
				memset(C1,0,sizeof(C1));
				memset(C2,0,sizeof(C2));
				A.clear();B.clear();CS.clear();AB.clear();
				getchar();
				cin>>A;
				getchar();
				cin>>B;
				getchar();
				cin>>n;
				for(i=0;i<n;i++)	C[i].clear();
				for(i=0;i<n;i++)
					{
						getchar();
						cin>>C[i];
					}
				AB.append(A);
				AB.append(B);
				for(i=0;i<n;i++)
						CS.append(C[i]);
				//cout<<AB<<endl<<CS<<endl;
				for(i=0;i<AB.size();i++)
					C1[AB[i]-'a']++;
				for(i=0;i<CS.size();i++)
					C2[CS[i]-'a']++;
				for(i=0;i<26;i++)
					if(C1[i]<C2[i])	break;
				if(i!=26)	cout<<"NO"<<endl;
				else		cout<<"YES"<<endl;	
				
			}
		return 0;
	}