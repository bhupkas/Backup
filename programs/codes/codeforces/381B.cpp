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
	int num;
	cin >> n;
	for(int i = 0 ; i < n ; i++)	cin >> num , v.push_back(num);
	sort(v.begin(),v.end());
	reverse(v.begin(),v.end());
	deque < int > q;
	q.push_back(v[0]);
	int i = 1;
	while(v[i] == v[0])	i++;
	for(int j = i ; j < n ; j++)
	{
		if(j == n - 1)	q.push_back(v[j]);
		else
		{
			if(v[j] == v[j + 1])	
			{
				q.push_back(v[j]);
				q.push_front(v[j+1]);
				int k = j;
				while(v[j] == v[k] && j != n)	j++;
				j--;
			}	
			else	q.push_back(v[j]);	
		}
	}
	cout << q.size()<< endl;
	for(int i = 0 ; i < q.size() ; i++)	cout << q[i] << " ";
	cout << endl;
	return 0;
}
