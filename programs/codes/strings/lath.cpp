# include <cstdio>
# include <cstring>
#include "iostream"
using namespace std;
char inp[100001];
int suf[18][100001];
int val[100001];
int final[100001],final1[100001];
int cnt[100001],cnt1[100001],perm[100001];
int len,temp;
void radixsort(int c)
{
  temp=(len+2<26?26:len+2);
  memset(cnt,0,temp<<2);
  memset(cnt1,0,temp<<2);
  for(int i=0;i<len;i++)
    cnt[val[i]+2]++,
    cnt1[suf[c][i]+1]++;
  for(int i=1;i<temp;i++)
    cnt[i]+=cnt[i-1],
    cnt1[i]+=cnt1[i-1];
  for(int i=0;i<len;i++)
    final1[cnt[val[i]+1]++]=i;
  for(int i=0;i<len;i++)
    final[cnt1[suf[c][final1[i]]]++]=final1[i];
}
void getBest(int freq,int len,int& bestlen,int& bestfreq)
{
  if ( freq>bestfreq || (freq==bestfreq&&len>bestlen) )
    bestlen=len,bestfreq=freq;
}
int match(int a,int b,int c)
{
  if(c<0||a>=len||b>=len)return 0;
  if(suf[c][a]==suf[c][b])return (1<<c)+match(a+(1<<c),b+(1<<c),c-1);
  return match(a,b,c-1);
}
int main()
{
  //while(1)
  {
    int L,H;
    //scanf("%d%d",&L,&H);
    //if(H==0)return 0;
    scanf("%s",inp);
    len=0;
    for(;inp[len];len++)
      suf[0][len]=inp[len]-'a';
    int c,w,f=1;
    for(c=1,w=1;;c++,w<<=(f=1))
    {
      for(int i=0;i<len;i++)
	val[i]=(i+w<len?suf[c-1][i+w]:-1);
      radixsort(c-1);
      
      for(int i = 0 ; i < len ; ++i)	cout << final[i] << " ";
      cout << endl;
      
      suf[c][final[0]]=0;
      for(int i=1;i<len;i++)
	if(suf[c-1][final[i]]==suf[c-1][final[i-1]]&&val[final[i]]==val[final[i-1]])
	  suf[c][final[i]]=suf[c][final[i-1]],
	  f=0;
	else
	  suf[c][final[i]]=i;
	  
	  
	if(f){c++;break;}
    }
    c--;
    /*
    for(int x=0;x<len;x++)perm[suf[c][x]]=x;
    int last=0,bestl,bestct=0,lastCommon=len-perm[0];
    for(int x=1;x<len;x++)
    {
      int common=match(perm[last],perm[x],c-1);
      if(common<L)
      {
	getBest(x-last,lastCommon,bestl,bestct);
	last=x;
	lastCommon=len-perm[x];
      }
      else lastCommon=common;
    }
    getBest(len-last,lastCommon,bestl,bestct);

    printf("%d %d\n",bestct,bestl>H?H:bestl);
	*/
		
	for(int i = 0 ; i < len ; ++i)	cout << suf[c][i] << " ";
	cout << endl;
  }
}
