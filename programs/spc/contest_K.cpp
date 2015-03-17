#include<cstdio>
#include<ctime>
#include<cstring>
#include<iostream>

// this solutions is directly taken from COCI contest 
// test data are also directly taken


using namespace std;

long long sol;
int kol[1<<10];

int main()
{
	freopen("input_K.txt" , "r" , stdin);
	int T;
	cin>> T;
	while (T--)
	{
		memset(kol , 0 , sizeof (kol));
		int n; scanf("%d", &n);
		char buff[22];
		sol = 0;
		while(n--)
		{
		          scanf("%s", buff);
		          int s = strlen(buff);
		          int mask = 0;
		          for(int i=0; i<s; ++i)
		                 mask |= (1<<(buff[i]-'0'));
		          kol[mask]++;
		}
		for(int i=0; i<1024; i++)
		        for(int j=i+1; j<1024; j++)
		                if( i & j ) sol += (long long)kol[i] * kol[j];
		for(int i=0; i<1024; i++) sol += (long long)kol[i]*(kol[i]-1)/2;
		cout << sol << endl;
    }
    fprintf(stderr, "%.2lf\n", clock()*1.0/CLOCKS_PER_SEC );
    return 0;
}
