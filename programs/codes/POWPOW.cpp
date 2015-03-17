#include"stdio.h"
include"iostream"
using namespace std;
typedef long long LL;
LL M2[100005],M5[100005];
void pre()
	{
		LL m;
		M2[1] = 1;
		for(int i = 2; i <= 10008; i++) {
		M2[i] = (-(m/i) * M2[m % i]) % m + m;}

		m=5000000003;
		M5[1] = 1;
		for(int i = 2; i <= 100004; i++) {
		M5[i] = (-(m/i) * M5[m % i]) % m + m}
	}