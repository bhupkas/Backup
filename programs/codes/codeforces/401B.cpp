/* bhupkas */

using namespace std;

#include "bits/stdc++.h"

int k;
int x;

string str;

int T[4004];

int main()
{
	scanf("%d %d",&x,&k);
	int a,b,c;
	for(int i = 0 ; i < k ; ++i)
	{	
		scanf("%d",&a);
		if(a == 1)	
		{
			scanf("%d %d",&b,&c);
			T[b] = 2;
			T[c] = 1;
		}
		else
		{
			scanf("%d",&b);
			T[b] = 2;
		}
	}
	T[x] = 2;
	int mn,mx;
	mn = mx = 0;
	int curr = 0;
	int temp ;
	for(int i = 1 ; i <= x ; ++i)
	{
		if(T[i] == 2 & T[i+1] == 1)	
		{
			temp = i - curr - 1;
			curr = i + 1;
			if(temp & 1)	
			{
				mn += (temp)/2 + 1;
				mx += temp;
			}
			else
			{
				mn += temp/2;
				mx += temp;
			}	 	
			++i;
		}
		else if(T[i] == 2)
		{
			temp = i - curr - 1;
			curr = i;
			if(temp & 1)	
			{
				mn += (temp)/2 + 1;
				mx += temp;
			}
			else
			{
				mn += temp/2;
				mx += temp;
			}	 
		}
	}
	printf("%d %d\n",mn,mx);
	return 0;
}
