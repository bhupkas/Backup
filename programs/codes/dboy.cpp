    #include"stdio.h"
    #include"algorithm"
    using namespace std;
    int mini(int a,int b)
    {
    if(a<b) return a;
    return b;
    }
    int main()
    {
    int min=1000,max=-1,t,n,H[501],K[501],i,j,A[2500],ans;
    scanf("%d",&t);
    while(t--)
    {
    ans=0;
    max=-1;
    min=1000;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&H[i]);
    if(H[i]>max) max=H[i];
    }
    max*=2;
    for(i=0;i<=max;i++) A[i]=1000;
    for(i=0;i<n;i++)
    {
    scanf("%d",&K[i]);
    if(K[i]<min) min=K[i];
    A[K[i]]=1;
    }
    for(i=min;i<=max;i++)
    {
    j=min;
    while((j+i)<=max)
    {
    A[j+i]=mini(A[i+j],A[i]+A[j]);
    j++;
    }
    }
    for(i=0;i<n;i++)
    ans+=A[2*H[i]];
    printf("%d\n",ans);
    }
    return 0;
    } 