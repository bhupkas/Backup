#include<stdio.h>

int a[3000000][3]={0};
// 0 val 1 min 2 max


void displ(int lev)
{
int i,j;
for(j=0;j<=lev;j++)
{
for(i=0;i<(1<<j);i++)
{
printf("%d|%d|%d ",a[(1<<j)+i][0],a[(1<<j)+i][1],a[(1<<j)+i][2]);
}
printf("\n");
}

}

int max(int i,int j)
{
if(i>j)
return i;
else
return j;
}

int min(int i,int j)
{
if(i<j) return i;
else return j;
}


void add(int i,int l,int v)
{
int cl,cr;
cl=(1<<l)+i-1;

a[cl][1]=a[cl][2]=v;

while(cl!=1)
{
a[cl>>1][1]=(a[(cl>>1)*2][1]<a[(cl>>1)*2+1][1]?a[(cl>>1)*2][1]:a[(cl>>1)*2+1][1]);
a[cl>>1][2]=(a[(cl>>1)*2][2]>a[(cl>>1)*2+1][2]?a[(cl>>1)*2][2]:a[(cl>>1)*2+1][2]);
cl/=2;
}
}

void rmv(int i,int l)
{
int cl,cr;
cl=(1<<l)+i-1;

//a[cl][1]=a[cl][2]=0;

a[cl][1]=1000000;
a[cl][2]=-1000000;
//*/
while(cl!=1)
{
a[cl>>1][1]=(a[(cl>>1)*2][1]<a[(cl>>1)*2+1][1]?a[(cl>>1)*2][1]:a[(cl>>1)*2+1][1]);
a[cl>>1][2]=(a[(cl>>1)*2][2]>a[(cl>>1)*2+1][2]?a[(cl>>1)*2][2]:a[(cl>>1)*2+1][2]);
cl/=2;
}
}






int main()
{
int t,i,j,k,l,ans,w,n;
int b[1000000];

scanf("%d%d",&n,&w);
l=0;
while(w>(1<<l)) l++;
//printf("%lld %d",l,1<<(l+1));

for(i=0;i<(1<<(l+1));i++)
{
a[i][1]=1000000;
a[i][2]=-1000000;
}

//displ(l);

ans=0;
for(i=0;i<n;i++)
{
scanf("%d",&b[i]);
add(i%w+1,l,b[i]);

// if(i>=w)
// rmv(b[i-w],l);

if(i>=w-1)
if(a[1][2]-a[1][1]==w-1)
ans++;
// displ(l);
// printf("%d\n",ans);

}
printf("%d\n",ans);
return 0;
}
