/* bhupkas */

#include "bits/stdc++.h"
using namespace std;
 
void failure(char *a,int n,int *f)
{
	f[0] = f[1] = 0;
	int j;
	for(int i = 2 ; i <= n ; i++)
	{
		j = f[i-1];
		while(1)
		{	
			if(a[j] == a[i - 1])
			{
				f[i] = j+1;
				break;
			}
			if(j == 0)
			{	
				f[i] = 0;
				break;
			}
			j = f[j];
		}
	}
} 
 
int main()
{
    int n,r;
    char s;
    while(1)
    {
        int i=0,pos=0,bpos=0,j=0;
        scanf("%d",&n);
        char *a=(char *)malloc(n+1);
        //char *b=(char *)malloc(n+1);
        int *f=(int *)malloc((n+1)*sizeof(int));
        cin>>a;
        //cout<<a;
        failure(a,n,f);
        scanf("%c",&s);
        r=0;
        while(scanf("%c",&s)!=EOF)
        {
            if(s=='\n')
            {
                pos=0;
                cout<<"\n";
                r=1;
                break;
            }
            while(1)
            {
                if(s==a[i])
                {
                    i++;
                    if(i==n)
                    {
                        i=f[n];
                        cout<<pos-n+1<<"\n";
                    }
                    break;
                }
                else if(i>0)
                    i=f[i];
                else
                    break;
             }
            pos++;
        }
        if(r==0)
            break;
    }
}
