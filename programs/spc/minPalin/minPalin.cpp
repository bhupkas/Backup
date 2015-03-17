#include <iostream>
#include <cstdio>
#include <list>
#include <queue>
#include <cstring>
#include <algorithm>

#define maxn 2005
#define INF 2005
using namespace std;

int memo[maxn];
int isPalinMemo[maxn][maxn];
string s;

int isPalin (int left , int right) {
    int &res = isPalinMemo[left][right];
    if (res == -1) {
        res = 0;
        if (right - left < 1)
            res = 1;
        else {
            if (s[left] == s[right]) {
                res = isPalin(left + 1 , right - 1);
            } else res = 0;
        }
    }
    return res;
}

int dp (int index) {
    int &res = memo[index];
    if (res == -1) {
        if (index >= s.size())
            res = 0;
        else {
            res = INF;
            for (int i = index; i < s.size(); i++) {
                if (isPalin (index , i))
                    res = min (res , dp (i + 1) + 1);
            }
        }
    }
    return res;
}



int main() {
//    freopen ("palinInput.txt" , "r" , stdin);
    //freopen ("palinOutput.txt" , "w" , stdout);
    int T;
    cin >> T;
    while (T--) {
        cin >> s;
        //cout << s << endl;
        //continue;
        memset (memo , -1 , sizeof(memo));
        memset (isPalinMemo , -1 , sizeof(isPalinMemo));
        int n = s.size();

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                //string myStr = s.substr (i , j - i + 1);
                int temp = isPalin (i , j);
                //cout << myStr << " : " << temp << " ";
            }
            //cout << endl;
        }
        //cout << "done" << endl;

        int ans = dp (0);

        cout << ans << endl;
    }

    return 0;
}
