/* bhupkas */

#include "iostream"
#include "stdio.h"
#include "time.h"
#include "stdlib.h"

using namespace std;

#define 	FOR(i,a,b)			for(int i = a;i < b;i++)

int main()	{
	srand(time(NULL));
	int n;
	n = rand() % 100 + 1;
	cout<<n<<endl;
	FOR(i,0,n)	{
		cout << rand() % 1000 - 500 <<endl;	
	}
	return 0;
}