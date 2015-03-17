#include"stdio.h"
#include"string.h"
using namespace std;
int main()
{
	int n,m,i;
	char S[10000];
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)	scanf("%s",S);
	scanf("%d",&m);
	getchar();
	for(i=0;i<m;i++)	scanf("%s",S);
	for(i=0;i<m-1;i++)	printf("Take A\n");
	printf("Take C\n");
	printf("Play AA\n");
	return 0;
}	