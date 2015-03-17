/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

int main()
{
	int n;
	/*cin >> n;
	vector < int > v(n);
	for(int i = 0 ; i < n ; i++)	cin >> v[i];
	*/
	string str1,str2;
	cin >> str1 >> str2;
	int h1,h2,m1,m2;
	h1 = (str1[0] - '0') * 10 + str1[1] - '0';
	h2 = (str2[0] - '0') * 10 + str2[1] - '0'; 
	m1 = (str1[3] - '0') * 10 + str1[4] - '0';
	m2 = (str2[3] - '0') * 10 + str2[4] - '0';
	int h3,m3;
	int tot1,tot2;
	tot1 = h1 * 60 + m1;
	tot2 = h2 * 60 + m2;
	int tot3 = tot1 - tot2;
	if(tot3 >= 0)
	{	
		h3 = tot3 / 60;
		m3 = tot3 % 60;
		cout << h3/10 << h3 % 10 << ":" << m3 / 10 << m3%10 << endl; 
	}
	else
	{
		tot3 = tot3 + 1440;
		h3 = tot3 / 60;
		m3 = tot3 % 60;
		cout << h3/10 << h3 % 10 << ":" << m3 / 10 << m3%10 << endl;
	}
	return 0;
}
