/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

int main()
{
	int t,d;
	string str1,str2;
	cin >> t;
	double ans1 , ans2;
	int t1,t2;
	while(t--)
	{
		t1 = t2 = 0;
		cin >> str1 >> str2;
		cin >> d;
		t1 = ((str1[0] - '0') * 10 + str1[1] - '0') * 60 + (str1[3] - '0') * 10 + (str1[4] - '0');
		t2 = ((str2[0] - '0') * 10 + str2[1] - '0') * 60 + (str2[3] - '0') * 10 + (str2[4] - '0');
		ans1 = (double)(t1 - t2 ) + (double)(d);
		if(2 * d + t2 > t1)
		{
			ans2 = (double)(d);
			ans2 += (double)(t1 - t2)/2.0;
		} 
		else	ans2 = (double)(t1 - t2);
		printf("%0.1lf %0.1lf\n",ans1,ans2);
	}
	
	return 0;
}
