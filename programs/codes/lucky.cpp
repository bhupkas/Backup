#include<cstdio>
#include<cstring>
using namespace std;
inline int m(int a,int b)
	{
	if(a<=b)	return a;
	else		return b;
	}
int main()
	{
	int min,t,anss,ansf,Af,Bf,As,Bs,Ags,Bgs,Alf,Blf,Am,Bm,i;
	scanf("%d",&t);
	char A[20002],B[20002];
	getchar();
	while(t--)
		{
		min=0;anss=0;ansf=0;Af=0;Bf=0;As=0;Bs=0;Ags=0;Bgs=0;Alf=0;Blf=0;Am=0;Bm=0;
		scanf("%s",A);
		scanf("%s",B);
		for(i=0;i<strlen(A);i++)
			{
			if((A[i]-'0')==7)	As++;
			else if((A[i]-'0')==4)	Af++;
			else if((A[i]-'0')==8||(A[i]-'0')==9)	Ags++;
			else if((A[i]-'0')<4)	Alf++;
			else 			Am++;
			if((B[i]-'0')==7)	Bs++;
			else if((B[i]-'0')==4)	Bf++;
			else if((B[i]-'0')==8||(B[i]-'0')==9)	Bgs++;
			else if((B[i]-'0')<4)	Blf++;
			else 			Bm++;
			}
		min=m(As,Bm);
		anss+=min;	
		As-=min;
		Bm-=min;
		if(As)	
			{
			min=m(As,Blf);
			anss+=min;	
			As-=min;
			Blf-=min;
			if(As)
				{
				min=m(As,Bf);
				anss+=min;
				As-=min;
				Bf-=min;
				}
			}
		min=m(Bs,Am);
		anss+=min;	
		Bs-=min;
		Am-=min;
		if(Bs)	
			{
			min=m(Bs,Alf);
			anss+=min;	
			Bs-=min;
			Alf-=min;
			if(Bs)
				{
				min=m(Bs,Af);
				anss+=min;
				Bs-=min;
				Af-=min;
				}
			}
		min=m(As,Bs);
		anss+=min;
		As-=min;
		Bs-=min;
		min=m(Af,Blf);
		ansf+=min;
		Af-=min;
		Blf-=min;
		if(Af)	
			{
			min=m(Af,Bf);
			ansf+=min;
			Af-=min;
			Bf-=min;
			}
		min=m(Bf,Alf);
		ansf+=min;
		Bf-=min;
		Alf-=min;
		if(Bf)	
			{
			min=m(Bf,Af);
			ansf+=min;
			Bf-=min;
			Af-=min;
			}
		while(anss--)
			printf("7");
		while(ansf--)
			printf("4");
		printf("\n");		
		}
	return 0;
	} 
