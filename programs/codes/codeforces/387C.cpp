/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

int n,ans;

string str;

bool cmp(int x)
{
  int i;
  i=0;
  while (i<x)
  {
    if (str[i]>str[x+i]) return true;
    if (str[i]<str[x+i]) return false;
    i++;
  }
  return true;
}

int main()
{
  int i,r,t;
	cin >> str;
	n = str.size();
  r=n-1;
  ans=1;
  for (i=n-1;i>=0;i--)
  {
    if (str[i]=='0') continue;
    t=r-i+1;
    if (i>t || (i==t && cmp(i)))
    {
      ans++;
      r=i-1;
    }
    else
      break;
  }
	cout << ans << endl;
  return 0;
}
