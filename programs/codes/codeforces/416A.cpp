/* bhupkas */

using namespace std;

#include "bits/stdc++.h"

typedef long long LL;

int main()
{
	int n;
	cin >> n;
	string str,str1;
	LL num;
	LL l,r;
	l = -2*(LL)(1e9);
	r = 2*(LL)(1e9);
	while(n--)
	{
		cin >> str >> num >> str1;
		if(str.size() == 2)
		{
			if(str[0] == '>')
			{	
				if(str1[0] =='Y')	l = max(l,num);
				else			r = min(r,num-1);
			}
			else			
			{
				if(str1[0] =='Y')	r = min(r,num);			
				else			l = max(l,num+1);
			}
		}
		else
		{
			if(str[0] == '>')	
			{
				if(str1[0] =='Y')	l = max(l,num+1);
				else			r = min(r,num);
			}
			else			
			{	
				if(str1[0] =='Y')	r = min(r,num-1);	
				else			l = max(l,num);
			}
		}
	}
	if(r - l >= 0)	cout << l << endl;
	else	cout << "Impossible" << endl;
	return 0;
}
