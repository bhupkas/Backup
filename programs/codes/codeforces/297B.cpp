/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

int main()
{
	int n,m,k;
	multiset < int > s1,s2;
	multiset < int > :: iterator it1,it2,it3;
	cin >> n >> m >> k;
	int num;
	for(int i = 0 ; i < n ; i++)	cin >> num , s1.insert(num);
	for(int i = 0 ; i < m ; i++)	cin >> num , s2.insert(num);
	if(n <= m)
	{
		for(it1 = s1.begin() ; it1 != s1.end() ; )
		{
			it2 = s2.find((*it1));
			it3 = it1;
			it3++;
			if(it2 != s2.end())	
			{	
				
				s1.erase(it1);
				s2.erase(it2);
		
			}
			it1 = it3;
		}
	}
	else
	{
		for(it2 = s2.begin() ; it2 != s2.end() ; )
		{
			it1 = s1.find((*it2));
			it3 = it2;
			it3++;
			if(it1 != s1.end())	
			{	
				s1.erase(it1);
				s2.erase(it2);
				
			}
			it2 = it3;
		}
	}
	/*for(it1 = s1.begin() ; it1 != s1.end() ; it1++)	cout << (*it1) << " ";
	cout << endl;
	for(it2 = s2.begin() ; it2 != s2.end() ; it2++)	cout << (*it2) << " ";
	cout << endl;
	*/
	if(s1.size() == 0)	
	{
		puts("NO");
		return 0;
	}	
	if(s1.size() <= s2.size())
	{	
		bool ok = true;
		it2 = s2.end();
		it2--;
		it1 = s1.end();
		it1 --;
		for( ; it1 != s1.end() ; it1-- , it2--)	
		{
			if((*it2) < (*it1))	{ok = false ; break;}
			if(it1 == s1.begin())	break;
		}
		if(ok)	
		{
			puts("NO");
			return 0;
		}
	} 
	{
		it1 = s1.end();
		it1--;
		it2 = s2.begin();
		if((*it1) > (*it2))	puts("YES");
		else			puts("NO");
	}
	return 0;
}
