using namespace std;

#include "bits/stdc++.h"

int a;

int main()
{
		a = 5;
		if(fork() == 0)
		{
			sleep(1000);
			cout << a << endl;
		}
		else
		{
			wait();
			cout << "foo" << endl;
		}
		return 0;
}