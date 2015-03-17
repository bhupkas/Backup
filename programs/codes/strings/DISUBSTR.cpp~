#include <vector>
#include <iostream>
#include <string>
#include "bits/stdc++.h"
using namespace std;

struct SuffixArray {
	const int L;
	string s;
	vector<vector<int> > P;
	vector<pair<pair<int,int>,int> > M;

	SuffixArray(const string &s) : L(s.length()), s(s), P(1, vector<int>(L, 0)), M(L) {
		for (int i = 0; i < L; i++) P[0][i] = int(s[i]);
		for (int skip = 1, level = 1; skip < L; skip *= 2, level++) {
			P.push_back(vector<int>(L, 0));
			for (int i = 0; i < L; i++) 
				M[i] = make_pair(make_pair(P[level-1][i], i + skip < L ? P[level-1][i + skip] : -1000), i);
			sort(M.begin(), M.end());
			for (int i = 0; i < L; i++) 
				P[level][M[i].second] = (i > 0 && M[i].first == M[i-1].first) ? P[level][M[i-1].second] : i;
		}    
	}

	vector<int> GetSuffixArray() { return P.back(); }

	// returns the length of the longest common prefix of s[i...L-1] and s[j...L-1]
	int LongestCommonPrefix(int i, int j) {
		int len = 0;
		if (i == j) return L - i;
		for (int k = P.size() - 1; k >= 0 && i < L && j < L; k--) {
			if (P[k][i] == P[k][j]) {
				i += 1 << k;
				j += 1 << k;
				len += 1 << k;
			}
		}
		return len;
	}
};

#define INF 100000000
int seg[2000005];
int D[500005];
void build(int idx, int l , int r)
{	
	if(l == r)	
	{
		seg[i] = D[i]
		return;
	}
	int mid = (l + r) / 2;
	build(2*idx + 1, l , mid);
	build(2*idx + 2, mid + 1, r);
	seg[idx] = min(seg[2*idx+1],seg[2*idx+2]);
}

int query(int idx, int l, int r , int ql , int qr)
{	
	if(l > qr || r < ql)	return INF;
	if(l >= ql && r <= qr)	return seg[idx];
	int mid = (l + r) >> 1;
	return min(query(2*idx+1,l,mid,ql,qr),query(2*idx+2,mid+1,r,ql,qr));
}

int main() 
{

	vector < int > v;
	int t;
	string str1,str2;
	cin >> str1 >> str2;
	string str = str1 + "1" + str2 + "2";	
	int n = str.size();
	SuffixArray suffix(str);
	v = suffix.GetSuffixArray();
	int A[500005];
	for(int i = 0 ; i < n ; ++i)	A[v[i]] = i;
	int mx = -1;
	int i = 0 , j = 1;
	int cnt1,cnt2;
	for(int i = 0 ; i < n - 1; ++i)	D[i] = suffix.LongestCommonPrefix(i,i+1);
	int n1 = str1.size() + 1;
	if(A[0] < n1)	cnt1++;
	else		cnt2++;
	int temp;
	while(i < n && j < n)
	{
		if(cnt1 > 0 && cnt2 > 0)
		{
			temp = query(0,0,n-2,	
		}
	}
	return 0;
}
