/* bhupkas */
#include"iostream"
#include"stdio.h"
#include"algorithm"
#include"vector"
using namespace std;
typedef long long LL;
int segtreemin[400105],startmax[100105],lastmax[100105];
int Bmin[400105],N;
void buildmin(int i)
	{
		if(i>N-2)	{segtreemin[i]=Bmin[i-N+1];	return;}
		buildmin(2*i+1);
		buildmin(2*i+2);
		segtreemin[i]=min(segtreemin[2*i+1],segtreemin[2*i+2]);
		return;
	}
int querymin(int l,int r,int cl,int cr,int idx)
	{
		int mid,le_val=0,ri_val=0,i,j;
		mid=(cl+cr)/2;
		if(r<cl || l>cr)	return (int)1e9;													
		if(l<=cl && r>=cr)	return segtreemin[idx];									
		le_val=querymin(l,r,cl,mid,2*idx+1);										
		ri_val=querymin(l,r,mid+1,cr,2*idx+2);
		return min(le_val,ri_val);
	}
int main()
	{
		int n,q,i,j,l,r,idx;
		double te1,te2,te3,te4,te5,ans;
		cin>>n;
		for(i=0;i<n;i++)
			{cin>>Bmin[i];}
		startmax[0]=Bmin[0];
		for(i=1;i<n;i++)
			{
				startmax[i]=max(startmax[i-1],Bmin[i]);
			}
		for(i=0;i<n;i++)
			if(Bmin[i]==startmax[n-1])	break;
		idx=i;
		lastmax[n-1]=Bmin[n-1];
		for(i=n-2;i>=0;i--)
			{
				lastmax[i]=max(lastmax[i+1],Bmin[i]);
			}
		cin>>q;
		N=1;
		while(N<n)
			N<<=1;
		for(i=n;i<2*N-1;i++)
			{
				Bmin[i]=(int)1e9;
			}
		buildmin(0);
		while(q--)
			{
				ans=0;
				cin>>l>>r;
				te1=(double)querymin(l+N-1,r+N-1,N-1,2*N-2,0);
				if(l==0)	te2=0;
				else 		te2=startmax[l-1];
				if(r==n-1)	te3=0;
				else 		te3=lastmax[r+1];
				te4=max(te2,te3);
				if(idx>=l && idx<=r)
					{
						ans=max((double)(te4+te1),(double)te1+(double)(Bmin[idx]-te1)/2);
					}
				else
					{
						ans=te4+te1;
					}	
				printf("%0.1lf\n",ans);
			}
		return 0;
	}