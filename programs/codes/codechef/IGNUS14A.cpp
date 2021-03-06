/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

int read () {
	bool minus = false;
	int result = 0;
	char ch;
	ch = getchar();
	while (true) {
		if (ch == '-') break;
		if (ch >= '0' && ch <= '9') break;
		ch = getchar();
	}
	if (ch == '-') minus = true; else result = ch-'0';
	while (true) {
		ch = getchar();
		if (ch < '0' || ch > '9') break;
		result = result*10 + (ch - '0');
	}
	if (minus)
		return -result;
	else
		return result;
}

int  A[100005];
int  memo[100005];

#define INF (int)(1e9)
/*

int segtree[400005];
void build(int idx,int l,int r)
{
	if(l == r)	
	{
		segtree[idx] = A[l];
		return;
	}
	int mid = (l + r ) >> 1;
	build(2*idx + 1 , l , mid);
	build(2*idx + 2 , mid + 1 , r);
	segtree[idx] = min(segtree[2*idx + 1] , segtree[2 * idx + 2]);
}

int query(int idx, int l ,int r , int ql , int qr)
{
	if(l > qr || r < ql)	return INF;
	if(l >= ql && r <= qr)	return segtree[idx]; 
	int mid = (l + r) >> 1;
	if(mid >= qr)	return query(2*idx + 1 , l , mid , ql , qr);
	else if(mid < ql)	return query(2*idx + 2 , mid + 1 , r , ql , qr);
	return min(query(2*idx + 1 , l , mid , ql , qr) , query(2*idx + 2 , mid + 1, r, ql, qr));	
}

void update(int idx, int l , int r , int index, int val)
{
	if(index < l || index > r)	return;
	if(l == r && index == l)	
	{
		segtree[idx] = val;
		return;
	}
	int mid = (l + r) >> 1;
	if(mid >= index)	update(2 * idx + 1, l , mid , index , val);
	else			update(2 * idx + 2, mid + 1, r , index, val);
	segtree[idx] = min(segtree[2*idx+1],segtree[2*idx+2]);
}
*/
int main()
{
	int t,n,d;
	t = read();
	deque < int > q1,q2;
	while(t--)
	{
		q1.clear();
		q2.clear();
		n = read();
		d = read();
		for(int i = 0 ; i < n ; i++)	A[i] = read();
		for(int i = 0 ; i < n ; i++)	memo[i] = INF;
		//build(0,0,n-1);
		memo[0] = A[0];
		q1.push_back(memo[0]);
		q2.push_back(memo[0]);
		//update(0,0,n-1,0,memo[0]);
		for(int i = 1 ; i < n ; i++)
		{	
			memo[i] = min(memo[i] , q1.front() + A[i]);
			while(!q1.empty() && memo[i] < q1.back())	q1.pop_back();			
			q1.push_back(memo[i]);
			q2.push_back(memo[i]);
			if(q2.size() > d)
			{
				if(q2.front() == q1.front())	q1.pop_front() , q2.pop_front();
				else	q2.pop_front();
			}
			//update(0,0,n-1,i,memo[i]);
		}
		printf("%d\n",memo[n-1]);
	}
	return 0;
}
