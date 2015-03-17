/* bhupkas */

#include"iostream"
#include"stdio.h"
#include"vector"
#include"algorithm"

using namespace std;

#define S(n)	scanf("%d",&n)
#define eps 	1e-9

struct  node
{
	int idx,a,b;
	double ans;
};
typedef struct node Node;

bool f(Node A,Node B)
	{
		if(max(A.ans-B.ans,B.ans-A.ans)<eps )	return A.idx<B.idx;
		return A.ans>B.ans;
	}

double fun(int a,int b,int c,int d,int k)
	{
		double re;
		re=(double)0.0;
		re=(double)(c*a);
		re = (double)(re) * (double)((1-((double)(k)/(double)(100))));
		re+=(double)(d*b);
		return re;
	}
int main()
	{
		int i,j,n,t1,t2,k,te;
		vector<Node> v;
		Node N;
		double te1,te2,te3,te4;
		S(n);S(t1);S(t2);S(k);
		for(i=0;i<n;i++)
			{
				N.idx=i+1;
				S(N.a);
				S(N.b);
				N.ans=max(fun(N.a,N.b,t1,t2,k),fun(N.b,N.a,t1,t2,k));
				v.push_back(N);
			}
			sort(v.begin(),v.end(),f);
			for(i=0;i<n;i++)
				{
					cout<<v[i].idx<<" ";
					printf("%0.2lf\n",v[i].ans);
				}
		return 0;
	}