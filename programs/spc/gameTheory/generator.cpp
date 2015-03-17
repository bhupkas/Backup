// game problem solution
// link is http://acm.timus.ru/problem.aspx?space=1&num=1087

#include <iostream>
#include <cstdio>
#include <list>
#include <queue>
#include <cstring>
#include <algorithm>
#include <time.h>
#define maxn 100005
using namespace std;


int main() {
    //freopen("inputGame.txt" , "w" , stdout);
    cout << 1000 << endl;
    srand (time(NULL));
    for (int i = 0; i < 1000; i++) {
        int n = rand() % 100000 + 1;
        int m = rand() % 50 + 1;
        cout << n << " " << m << endl;
        for (int j = 0; j < m; j++) {
            cout << rand() % 100000 + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}
