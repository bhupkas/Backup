/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

void pre()
{
}

int main()
{
	pre();
	int n;
	vector < int > v;
	cin >> n;
	deque < int > q;
	int num;
	for(int i = 0 ; i < n ; i++)
	{
		cin >> num;
		q.push_back(num);
	}
	int v1 ,v2;
	v1 = v2 = 0;
	bool foo = true;
	while(!q.empty())
	{
		if(foo)
		{	
			if(q.front() > q.back())	v1 += q.front() , q.pop_front();
			else				v1 += q.back() , q.pop_back();
		
		}
		else
		{	
			if(q.front() > q.back())	v2 += q.front() , q.pop_front();
			else				v2 += q.back() , q.pop_back();
		
		}	
		foo = !foo;			
	}	
	cout << v1 << " " << v2 << endl;
	return 0;
}