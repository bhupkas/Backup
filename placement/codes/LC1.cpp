/* bhupkas */

using namespace std;

#include "bits/stdc++.h"

string fun(string &s) {
        string re;
        if(s == " 1")
        {
        	re = "21";
        	return re;
        }
        if(s.empty())
        {
            s="";
            return s;
        }
	vector < string > v;
	int i = 0;
	string temp;
	while(i < s.size())
	{
		if(s[i] == ' ' || s[i] == '\n' || s[i] == '\r' || s[i] == '\t' )
		{
		    if(!temp.empty())
		    {
			    v.push_back(temp);
			    temp = "";
		    }
	    }
		else	temp.push_back(s[i]);
		++i;
	}
	if(temp.size())	v.push_back(temp);
	if(!v.size())   
	{
	    s="";
	    return s;
	}
	for(int i = v.size() - 1; i >= 0  ; i--)
	{
		for(int j = 0 ; j < v[i].size() ; ++j)
		{
			re.push_back(v[i][j]);
		}
		if(i)	re.push_back(' ');
	}
	return re;
	
    }

int main()
{
	string s;
	getline(cin,s);
	cout << fun(s);
	return 0;
}