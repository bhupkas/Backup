#include<stdio.h>
#include<math.h>
int a[100001];
int countPalindrome(char *str)
{
	int i,j,k,count=0;
	for(i=0;str[i];i++)
	{
		k=i-1;j=i+1;  //count odd length palindromes
		while(k>=0 && str[j] && str[k]==str[j])
		{
            if(a[(j-k)+1]==0)
			{++count;}
			k--;j++;
		}

		k=i;j=i+1; //count even length palindrome
		if(k>=0 && str[j] && str[k]==str[j])
		{
			++count;
		}
	}
	return count;
}
int main()
{
    int t;
    char s[100001];
    int i,j;
    for(i=0; i<100000; i++)
        a[i]=0;
    a[1]=a[0]=1;
    for(i=2; i<=sqrt(100000); i++)
        if(a[i]==0)
            for(j=2; (i*j)<100000; j++)
                a[i*j]=1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",s);
        printf("%d\n",countPalindrome(s));
    }
    return 0;
}
