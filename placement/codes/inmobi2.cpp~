/* Given an array of integers, you need to check if its an arithmetic progression, geometric progression or fibonacci series. You then need to return the next number in the series or -999 if the given numbers does not follow any of the above series. The fibonacci series need not start with 0. A valid fibonacci series could be 8,9,17 */

using namespace std;

#include "bits/stdc++.h"

int main()
{
        int n;
        cin >> n;
        vector <int > v(n);
        for(int i = 0 ; i < n ; ++i)    cin >> v[i];
        if(n == 1)
        {
                cout <<v[0] + 1 << endl;
                return 0;
        }
        if(n == 2)
        {
                cout << v[0] + 2 * (v[1] - v[0]) << endl;
                return 0;
        }
        bool AP = true;
        for(int i = 2 ; i < n ; ++i)
        {
                if(v[i] - v[i-1] != v[1] - v[0])        
                {
                        AP = false;
                        break;
                }
        }
        if(AP)
        {
                cout << v[n-1] + v[1] - v[0] << endl;
                return 0;        
        }
        bool GP = true;
        for(int i = 2 ; i < n ; ++i)
        {
                if(v[i] / v[i-1] != v[1]/v[0])  
                {
                        GP = false;
                        break;
                }
        }
        if(GP)
        {
                cout << v[n-1] * v[1] / v[0] << endl;
                return 0;
        }
        bool FB = true;
        for(int i = 2 ; i < n ; ++i)
        {
                if(v[i] != v[i-1] + v[i-2])
                {
                        FB = false;
                        break;
                }
        }
        if(FB)
        {
                cout << v[n-1] + v[n-2] << endl;
                return 0; 
        }
        cout << -999 << endl;
        return 0;
}
