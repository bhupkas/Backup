#include <vector>
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdio>
#include <map>
#include <algorithm>
#include <cstring>
#include <time.h>

#define INF 100000000000000000LL
using namespace std;
#define N 1000000

int prime[1000005];
int p[1000005];
int counter = 0;

void sieve () {
	for (int i = 2; i <= N; i++)
		prime[i] = true;
	for (int i = 2; i  * i <= N; i++) {
		if (prime[i])
			for (int j = i * i; j <= N; j += i)
				prime[j] = false;
	}
	
	for (int i = 2; i <= N; i++)
		if (prime[i])
			p[counter++] = i;
}

int main() {
	sieve();
	
	cout << 5 << endl;
	srand (time(NULL));
	for (int i = 0; i < 5; i++) {
		int n = rand() % 1000;
		cout << n << endl;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {	
				cout << rand() % 100000 + 1 << " ";
			}
			cout << endl;
		}
	}
	
	return 0;
}
