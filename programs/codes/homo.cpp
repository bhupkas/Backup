#include<cstdio>
#include<map>
#include<set>
#include<cstring>
using namespace std;
int main()
	{
	int n,f=0,te;
	bool homo,hetero;
	char S[10];
	scanf("%d",&n);
	multiset<int> mul;
	multiset<int>::iterator it,it1;
	map<int,int> m;
	map<int,int>::iterator il;
	getchar();
	while(n--)
		{
		scanf("%s",S);
		scanf("%d",&te);
		if(S[0]=='i')	
			{
			mul.insert(te);
			m[te]++;
			if(m[te]==2)	f++;
			}
		else if(S[0]=='d')	
			{
			it=mul.find(te);
			if(it!=mul.end())
				{
				mul.erase(it);
				m[*it]--;
				if(m[*it]==1)	f--;
				}
			}
		if(mul.size()==1||mul.size()==0)	{printf("neither\n");	continue;}
		it=mul.begin();
		it1=mul.end();
		it1--;
		if(*it!=*it1)	hetero=true;
		else		hetero=false;
		if(f)		homo=true;
		else		homo=false;
		if(hetero&&homo)	printf("both\n");
		else if(homo&&!hetero)		printf("homo\n");
		else if(hetero&&!homo)		printf("hetero\n");
		}
	return 0;
	}
