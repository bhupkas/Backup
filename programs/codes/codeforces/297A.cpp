/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

int a,b;

int main()
{
	string str1,str2;	
	cin >> str1 >> str2;
	for(int i = 0 ; i < str1.size() ; i++)	a += str1[i] - '0';
	for(int i = 0 ; i < str2.size() ; i++)	b += str2[i] - '0';
	if(a + (a&1) >= b)	puts("YES");
	else			puts("NO");
	return 0;
}
