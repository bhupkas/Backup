/* bhupkas */

using namespace std;

#include "bits/stdc++.h"

vector < int > v[10];

int D[100005];

bool visi[10];

int main()
{
	string str;
	cin >> str;
	for(int i = 0 ; i < str.size() ; ++i)	
		v[str[i] - '0'].push_back(i);
	for(int i = 0 ; i < str.size() ; ++i)	D[i] = -1;
	for(int i = 0 ; i < 10 ; ++i)	visi[i] = false;
	deque < int > q;
	q.push_back(0);
	D[0] = 0;
	while(D[(int)str.size() - 1] == -1)
	{
		int curr = q.front();
		q.pop_front();
		if(!visi[str[curr]-'0'])	
		{
			visi[str[curr]-'0'] = true;
			for(int i = 0 ; i < v[str[curr]-'0'].size() ; ++i)
			{
				if(D[v[str[curr]-'0'][i]] == -1)
				{
					D[v[str[curr]-'0'][i]] = D[curr] + 1;	
					q.push_back(v[str[curr]-'0'][i]);
				}
			}	
		}
		if(curr > 0)
		{	
			if(D[curr-1] == -1)
			{	
				D[curr-1] = D[curr] + 1;
				q.push_back(curr-1);
			}	
		}
		if(curr < (int)str.size() - 1)
		{
			if(D[curr+1] == -1)
			{
				D[curr+1] = D[curr] + 1;				
				q.push_back(curr+1);
			}
		}
	}
	cout << D[(int)str.size() - 1] << endl;
	return 0;
}
