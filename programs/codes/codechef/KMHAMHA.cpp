/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

int cnt1,cnt2;

map < int , int > row,column;

#define N 1005

int bpGraph[N][N];

int matchR[N];

bool seen[N];

bool bpm(int u)
{
    for (int v = 0; v < cnt2; v++)
    {
        if (bpGraph[u][v] && !seen[v])
        {
            seen[v] = true; 
            if (matchR[v] < 0 || bpm(matchR[v]))
            {
                matchR[v] = u;
                return true;
            }
        }
    }
    return false;
}
 
int maxBPM()
{
    memset(matchR, -1, sizeof(matchR));
    int result = 0;
    for (int u = 0; u < cnt1; u++)
    {
        memset(seen, 0, sizeof(seen));
        if (bpm(u))
            result++;
    }
    return result;
}

int main()
{
	int t,n,x,y;
	cin >> t;
	while(t--)
	{
		row.clear();
		column.clear();
		cin >> n;
		cnt1 = cnt2 = 0;
		memset(bpGraph,0,sizeof(bpGraph));
		while(n--)
		{
			cin >> x >> y;
			if(row.find(x) == row.end())
				row[x] = cnt1++;
			if(column.find(y) == column.end())	
				column[y] = cnt2++; 
			bpGraph[row[x]][column[y]] = 1;
		}
		cout << maxBPM() << endl;
		
	}
	return 0;
}
