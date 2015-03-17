/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

const int N = 100005;

int P[2*N+5];

void manachar(string str)
{
	memset(P,0,sizeof(P));
	int n = str.size();
	string s;
	s += "$#";
	for(int i = 0 ; i < n ; i++)	
	{
		s.push_back(str[i]);
		s.push_back('#');
	}
	n = s.size();
	int id = 0;
	int mx = 0;
	for(int i = 1 ; i < n ; i++)
	{
		P[i] = mx > i ? min(P[2*id - i] , mx - i) : 1;
		while(s[i+P[i]] == s[i-P[i]])	P[i]++;
		if(i + P[i] > mx)	mx = i + P[i] , id = i;
	}
	mx = 0;
	for(int i = 1 ; i < n ; i++)
	{
		if(i + P[i] == n )
			mx = max(mx,P[i] - 1);
	}
	int j = str.size() - mx;
	while(j)	str.push_back(str[j-1]) , j--;
	cout << str << endl;
}

int main()
{
	char S[100005];
	string str;
	while(scanf("%s",S) != EOF)
	{	
		str = "";
		int n = strlen(S);
		for(int i = 0 ; i < n ; i++)	str.push_back(S[i]);
		manachar(str);
		
	}
	return 0;
}
