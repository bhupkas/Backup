#include <iostream>
#include <cstdio>
#include <list>
#include <queue>
#include <cstring>
#include <algorithm>
#include <time.h>

#define maxn 2000
using namespace std;

int main() {
//    freopen("palinInput.txt" , "w" , stdout);

    int T = 100;

    cout << T << endl;
    for (int i = 0; i < T; i++) {
        int n = rand() % maxn + 1;
        //cout << n << endl;
        for (int j = 0; j < n; j++) {
            char ch = 'a' + rand() % 26;
            cout << ch;
        }
        cout << endl;
    }

    return 0;
}
