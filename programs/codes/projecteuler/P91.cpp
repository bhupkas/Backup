/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

bool check(int x1,int y1,int x2,int y2)
{
	int s1,s2,s3;
	s1 = x2*x2+y2*y2;
	s2 = x1*x1+y1*y1;
	s3 = (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1);
	if(s1 == (s2+s3))	return true;
	if(s2 == (s1+s3))	return true;
	if(s3 == (s1+s2))	return true;
	return false;
}

int main()
{
	int n;
	cin >> n;
	int cnt = 0;
	for(int x1 = 0 ; x1 <= n ; x1++)
		for(int y1 = 0 ; y1 <= n ; y1++)
			for(int x2 = 0 ; x2 <= n ; x2++)
				for(int y2 = 0 ; y2 <= n ; y2++)
					{
						if((x1==0 && y1 == 0) || (x2==0 && y2==0))	continue;
						if(x1==x2 && y1==y2)	continue;
						if(check(x1,y1,x2,y2))	cnt++;
					}
	cout << cnt << endl;
}