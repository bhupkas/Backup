#include"stdio.h"
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

int main()	
	{
		int i,t,j,n;	
		/*
		while(i<100010)	
			{
				N1[i]=4;N1[i+1]=4;N1[i+2]=7;N1[i+3]=7;N1[i+4]=4;N1[i+5]=4;
				N2[i]=4;N2[i+1]=7;N2[i+2]=7;N2[i+3]=4;N2[i+4]=4;N2[i+5]=7;
				i+=6;
			}
		*/
		t=read();
		while(t--)
			{
				n=read();
				/*
				a1=a2=0;
				carry=0;
				for(i=n-1;i>0;i--)
					{
						A[i]=(carry+N1[i]+N2[i])%10;
						carry=(carry+N1[i]+N2[i])/10;
					}
				A[0]=N1[0]+N2[0]+carry;
				for(i=0;i<n;i++)	printf("%d",A[i]);
					printf("\n");
				*/
				printf("8");
				if(n%2==1)
					{
						for(j=0;j<(n-1)/4;j++)	printf("9251");
						if((n-1)%4==2)			printf("91");
					}
				else
					{
						for(j=0;j<(n-1)/4;j++)	printf("9251");
						if((n-1)%4==1)			printf("8");
						else if((n-1)%4==3)		printf("924");
					}
				printf("\n");
			}
		return 0;
	}