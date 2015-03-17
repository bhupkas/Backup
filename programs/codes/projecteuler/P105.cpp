/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

int main()
{
	int t = 100;
	int re = 0;
	vector < int > v;
	char ch;
	while(t--)
	{
		v.clear();
		bool ok = true;
		while(1)
		{
			int num = 0;
			ch = (char)getchar();
			while(ch != ',' && ch != '\n')	num = num * 10 + ch - '0' , ch = (char)getchar();
			v.push_back(num);
			if(ch == '\n')	break;
		}
		//for(int i = 0 ; i < v.size() ; i++)	cout << v[i] << " ";
		//cout << endl;
		int n = v.size();
		vector < pair < int , int > > answala;
		for(int i = 1 ; i < (1<<n) ; i++)
		{
			int s1 = 0;
			for(int j = 0 ; j < n ; j++)	if((1<<j) & i)	s1 += v[j];
			answala.push_back(make_pair(s1,i));
		}
		for(int i = 0 ; i < answala.size() ; i++)
		{
			for(int j = 0 ; j < answala.size() ; j++)
			{
				if(i == j)	continue;
				if(answala[i].second & answala[j].second)	continue;
				if(answala[i].first == answala[j].first)	
				{
					ok = false;
					break;
				}	
				int n1,n2;
				n1 = n2 = 0;
				for(int k = 0 ; k < n ; k++)	if(answala[i].second & (1<<k))	n1++;
				for(int k = 0 ; k < n ; k++)	if(answala[j].second & (1<<k))	n2++;
				if(n1 > n2 && answala[i].first <= answala[j].first)
				{
					ok = false;
					break;
				}
			}
			if(!ok)	break;
		}
		if(ok)
		{
			int val = 0;
			for(int i = 0 ; i < v.size() ; i++)	val += v[i];
			re += val;
		}
	}
	cout << re << endl;
	return 0;
}