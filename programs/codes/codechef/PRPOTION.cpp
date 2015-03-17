/* bhupkas */

using namespace std;

#include "bits/stdc++.h"

int main()
{
        int t,r,g,b,m;
        int mx1,mx2,mx3;
        cin >> t;
        int temp;
        while(t--)
        {
                cin >> r >> g >> b >> m;
                mx1 = mx2 = mx3 = 0;
                for(int i = 0 ; i < r ; ++i)   cin >> temp , mx1 = max(mx1 , temp);
                for(int j = 0 ; j < g ; ++j)   cin >> temp , mx2 = max(mx2 , temp);
                for(int k = 0 ; k < b ; ++k)   cin >> temp , mx3 = max(mx3 , temp);
                for(int i = 0 ; i < m ; ++i)
                {
                        temp = max(mx1,max(mx2,mx3));
                        if(temp == 0)       break;
                        if(mx1 == temp) mx1 >>= 1;
                        else if(mx2 == temp)    mx2 >>= 1;
                        else mx3 >>= 1;
                }           
                cout << max(mx1,max(mx2,mx3)) << endl;
        }       
        return 0;
}
