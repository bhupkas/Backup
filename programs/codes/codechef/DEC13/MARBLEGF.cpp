/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

typedef long long LL;

int n,q;
LL tree[1000005];

void update(int idx,LL val)
{
	while(idx <= n)	tree[idx] += val , idx += (idx & -idx);	
}

LL query(int idx)
{
	LL re = 0;
	while(idx)	re += tree[idx] , idx -= (idx & -idx);
	return re;	
}

int main()
{
	cin >> n >> q;
	int temp;
	for(int i = 0 ; i <= n ; i++)	tree[i] = 0;
	for(int i = 0 ; i < n ; i++)	cin >> temp , update(i+1,temp);
	string str;
	while(q--)
	{
		cin >> str;
		if(str[0] == 'S')	
		{
			int x,y;
			cin >> x >> y;
			x++;
			y++;
			cout << query(y) - query(x-1) << endl;
		}
		else if(str[0] == 'G')
		{
			int idx ;
			LL val;
			cin >> idx >> val;
			update(idx + 1 , val);
		}
		else
		{
			int idx ;
			LL val;
			cin >> idx >> val;
			update(idx + 1 , -1 * val);
		}
	}
	return 0;
}
