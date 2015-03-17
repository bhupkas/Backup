#include "bits/stdc++.h"

using namespace std;

int main()
{
	int n;
	cin>> n;
	vector<int> v(n);
	bool ans = true;
	int co = 0, co1 = 0;
	for(int i = 0; i< n; i++)
	{
		cin>> v[i];
		if(ans == false)	continue;
		if(v[i] == 25)		co ++;
		else if(v[i] == 50)
		{
			co1 ++;
			co --;
			if(co < 0)	ans = false;
		}	
		else
		{
			if(co > 0)
			{
				if(co1 > 0)	
				{
					co1 --;
					co --;
				}
				else
				{
					co -= 3;
				}
				if(co < 0)	ans = false;
			}
			else			ans = false;

		}
	}
	if(ans)	cout<<"YES"<<endl;
	else	cout<<"NO"<<endl;
}