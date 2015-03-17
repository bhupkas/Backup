#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cstring>
using namespace std;
const int maxn = 100000*4+5;
const int mod = 100000007;
int dp3[maxn];
int dp4[maxn];
int num[maxn];
int map[30]=
{
0,0,0,
1,1,1,
2,2,2,
3,3,3,
4,4,4,
5,5,5,5,
6,6,6,
7,7,7,7
};
int cnt[8]= {};
int tp[30];
char str[100000+5];
int cal(int len,int sp){
//printf("%d %d %d\n",len,sp,dp3[len]);
if(sp==3)
return dp3[len];
return dp4[len];
}
int trans()
{
long long ret =1;
int add=0;
int mem=-1;
for(int i=0; str[i]; i++)
{
int idx= str[i]-'a' ;
int sum = idx-tp[idx];
if(map[idx]==mem)
add+=sum;
else{
//
if(mem!=-1){
ret*=cal(add,cnt[mem]);
ret%=mod;
}
add=sum;
mem=map[idx];
}
if(!str[i+1])
ret*=cal(add,cnt[mem]);
}
return (int)(ret%mod);
}
int main()
{
int t;
tp[0]=-1;
for(int i=0; i<26; i++)
{
cnt[ map[i] ]++;
if(i)
{
if(map[i]==map[i-1])
tp[i]=tp[i-1];
else
tp[i]=tp[i-1]+cnt[ map[i-1] ];
}
}
 
memset(dp3,0,sizeof(dp3));
dp3[0]=1;
int len = 300000;
for(int i=0;i<len;i++){
for(int j=i+1;j<len&&j-i<=3;j++){
dp3[j]+=dp3[i];
dp3[j]%=mod;
}
if(i>3){
dp3[i]+=dp3[i-3];
dp3[i]%=mod;
}
}
 
memset(dp4,0,sizeof(dp4));
dp4[0]=1;
len = 400000;
for(int i=0;i<len;i++){
for(int j=i+1;j<len&&j-i<=4;j++){
dp4[j]+=dp4[i];
dp4[j]%=mod;
}
if(i>4){
dp4[i]+=dp4[i-4];
dp4[i]%=mod;
}
}
scanf("%d",&t);
while(t--)
{
scanf(" %s",&str);
printf("%d\n",trans());
}
return 0;
}