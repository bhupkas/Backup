#include"stdio.h"
#include"string.h"
using namespace std;
#define BUF 4096 // block size on my disk is 4KBs
char ibuf[BUF];
int ipt = BUF;
int read() {
while (ipt < BUF && ibuf[ipt] < '0') ipt++;
if (ipt == BUF) {
    fread(ibuf, 1, BUF, stdin);
    ipt = 0;
    while (ipt < BUF && ibuf[ipt] < '0') ipt++;
}
int n = 0;
while (ipt < BUF && ibuf[ipt] >= '0') n = (n*10)+(ibuf[ipt++]-'0');
if (ipt == BUF) {
    fread(ibuf, 1, BUF, stdin);
    ipt = 0;
    while (ipt < BUF && ibuf[ipt] >= '0') n = (n*10)+(ibuf[ipt++]-'0');
}
return n;
}
int chefre(int R[],int S[])
	{
		int i;
		for(i=0;i<26;i++)
			if((R[i]>0&&S[i]==0)||(R[i]==0&&S[i]>0))	break;
		if(i==26)	return 1;
		return 0;
	}
int realre(int R[],int S[])
	{
		int i;
		for(i=0;i<26;i++)
			if(R[i]!=S[i])	break;
		if(i==26)	return 1;
		return 0;
	}
int main()
	{
		char S1[1002],S2[1002];
		int l1,l2,i,t,R[27],S[27],ans;
		t=read();
		getchar();
		while(t--)
			{
				for(i=0;i<27;i++)	R[i]=S[i]=0;
				scanf("%s %s",S1,S2);
				l1=strlen(S1);l2=strlen(S2);
				for(i=0;i<l1;i++)	R[S1[i]-'a']++;
				for(i=0;i<l2;i++)	S[S2[i]-'a']++;
				if(chefre(R,S)==realre(R,S))	printf("YES\n");
				else							printf("NO\n");	
			}
	}