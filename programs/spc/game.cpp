// game problem solution
// link is http://acm.timus.ru/problem.aspx?space=1&num=1087

#include <iostream>
#include <cstdio>
#include <list>
#include <queue>
#include <cstring>
#include <algorithm>

#define maxn 100005
using namespace std;

int k[maxn];

int memo[maxn] , m;

int dp (int n) {
    int &res = memo[n];
    if (res == -1) {
        int moved = false;
        res = 0;
        for (int i = 0; i < m; i++) {
            if (n - k[i] >= 0) {
                moved = true;
                if (dp (n - k[i]) == 0) {
                    res = 1;
                    break;
                }
            }
        }
        if (!moved) res = 1;
    }
    return res;
}

int main() {
	int T;
	cin >> T;
	cout<<T<<endl;
	while (T--) {
		int n;
		cin >> n;
		cin >> m;
		cout << n << " " << m << endl;
		for (int i = 0; i < m; i++)
		    cin >> k[i];

		memset (memo , -1 , sizeof (memo));

		if (dp(n) == 1) printf("1\n");
		else printf("2\n");
	}
    return 0;
}

