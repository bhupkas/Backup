/* bhupkas */
#include"iostream"
#include"stdio.h"
#include"algorithm"
#include"vector"
using namespace std;
typedef long long LL;
int segtreemin[400105],segtreemax[400105];
int Bmin[100105],Bmax[100105],N;
void buildmin(int i)
	{
		if(i>N-2)	{segtreemin[i]=Bmin[i-N+1];	return;}
		buildmin(2*i+1);
		buildmin(2*i+2);
		segtreemin[i]=min(segtreemin[2*i+1],segtreemin[2*i+2]);
		return;
	}
void buildmax(int i)
	{
		if(i>N-2)	{segtreemax[i]=Bmax[i-N+1];	return;}
		buildmax(2*i+1);
		buildmax(2*i+2);
		segtreemax[i]=max(segtreemax[2*i+1],segtreemax[2*i+2]);
		return;
	}
int querymin(int l,int r,int cl,int cr,int idx)
	{
		if(l>r)	return (int)1e9;
		int mid,le_val=0,ri_val=0,i,j;
		mid=(cl+cr)/2;
		if(r<cl || l>cr)	return (int)1e9;													
		if(l<=cl && r>=cr)	return segtreemin[idx];									
		le_val=querymin(l,r,cl,mid,2*idx+1);										
		ri_val=querymin(l,r,mid+1,cr,2*idx+2);
		return min(le_val,ri_val);
	}
int querymax(int l,int r,int cl,int cr,int idx)
	{
		if(l>r)	return -1*(int)1e9;
		int mid,le_val=0,ri_val=0,i,j;
		mid=(cl+cr)/2;
		if(r<cl || l>cr)	return -1*(int)1e9;													
		if(l<=cl && r>=cr)	return segtreemax[idx];									
		le_val=querymax(l,r,cl,mid,2*idx+1);										
		ri_val=querymax(l,r,mid+1,cr,2*idx+2);
		return max(le_val,ri_val);
	}
int main()
	{
		int n,q,i,j,l,r;
		double te1,te2,te3,te4,te5,ans;
		cin>>n;
		for(i=0;i<n;i++)
			{cin>>Bmin[i];	Bmax[i]=Bmin[i];}
		cin>>q;
		N=1;
		while(N<n)
			N<<=1;
		for(i=n;i<2*N-1;i++)
			{
				Bmin[i]=(int)1e9;
				Bmax[i]=-1*(int)1e9;
			}
		buildmax(0);
		buildmin(0);
		while(q--)
			{
				ans=0;
				cin>>l>>r;
				te1=(double)querymin(l+N-1,r+N-1,N-1,2*N-2,0);
				ans+=te1;
				//cout<<segtreemin[l+N-1]<<" "<<segtreemin[r+N-1]<<endl;
				te2=(double)querymax(N-1,l+N-2,N-1,2*N-2,0);
				te3=(double)querymax(r+N,2*N-2,N-1,2*N-2,0);
				te4=max(te2,te3);
				te5=(double)querymax(l+N-1,r+N-1,N-1,2*N-2,0);
				//cout<<segtreemax[l+N-1]<<" "<<segtreemax[r+N-1]<<endl;
				te5-=te1;
				te5/=2;
				cout<<te1<<" "<<te2<<" "<<te3<<" "<<te4<<" "<<te5<<endl;
				ans+=max(te4,te5);
				printf("%0.1lf\n",ans);
			}
		return 0;
	}