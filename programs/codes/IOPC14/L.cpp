/* bhupkas */

#include "bits/stdc++.h"

using namespace std;

typedef long long LL;

#define MOD	(LL)(1e9 + 7)

#define BUF 4096
char ibuf[BUF];
int ipt = BUF;

template <class T>
T read()
{
	while (ipt < BUF && ibuf[ipt] < '0')
		ipt++;
	if (ipt == BUF)
	{
    	fread (ibuf, 1, BUF, stdin);
    	ipt = 0;
    	while (ipt < BUF && ibuf[ipt] < '0')
    		ipt++;
	}
	T n = 0;
	while (ipt < BUF && ibuf[ipt] >= '0')
		n = (n*10) + (ibuf[ipt++] - '0');
	if (ipt == BUF)
	{
    	fread (ibuf, 1, BUF, stdin);
    	ipt = 0;
    	while (ipt < BUF && ibuf[ipt] >= '0')
    		n = (n*10) + (ibuf[ipt++] - '0');
	}
	return n;
}

int P[1005];

const double PI = 4*atan(1);
typedef complex<double> base;

vector<base> omega;
int FFT_N;
void init_fft(int n)
{
     FFT_N  = n;
     omega.resize(n);
     double angle = 2 * PI / n;
     
     for(int i = 0; i < n; i++)
          omega[i] = base( cos(i * angle), sin(i * angle));
}

void fft (vector<base> & a)
{
     int n = (int) a.size();
     if (n == 1)  return;
     int half = n >> 1;
     
     vector<base> even (half),  odd (half);
     for (int i=0, j=0; i<n; i+=2, ++j)
     {
          even[j] = a[i];
          odd[j] = a[i+1];
     }
     fft (even), fft (odd);
     
     for (int i=0, fact = FFT_N/n; i < half; ++i)
     {
          base twiddle =  odd[i] * omega[i * fact] ;
          a[i] =  even[i] + twiddle;
          a[i+half] = even[i] - twiddle;
     }
}
void multiply (const vector<long long> & a, const vector<long long> & b, vector<long long> & res)
{
     vector<base> fa (a.begin(), a.end()),  fb (b.begin(), b.end());
     int n = 1;
     while (n < 2*max (a.size(), b.size()))  n <<= 1;
     fa.resize (n),  fb.resize (n);
     
     init_fft(n);
     fft (fa),  fft (fb);
     for (size_t i=0; i<n; ++i)
          fa[i] = conj( fa[i] * fb[i]);
     fft (fa);

     res.resize (min(n,2001));
     for (size_t i=0; i<res.size(); ++i)
          res[i] = (long long) (fa[i].real() / n + 0.5);
     for(int i = 0 ; i < res.size() ; i++)	res[i] = (res[i] % MOD);
}

vector<long long > Power(int val , int b)
{
	vector < long long > re(val+1);
	vector < long long > a(val+1);
	re[0] = a[0] = 1LL;
	for(int i = 1; i <= val ; i++)	re[i] = 0 , a[i] = 1LL;
	while(b)
	{
		if(b&1)	multiply(re,a,re);
		multiply(a,a,a);
		b >>= 1;
	}
	return re;
}

int main()
{
	int q;
	int n;
	n = read<int>();
	int foo;
	for(int i = 0 ; i < n ; i++)	foo = read<int>(), P[foo]++;
	q = read<int>();
	vector < long long > re;
	re.push_back(1LL);
	for(int i = 1 ; i <= 1000 ; i++)	
		if(P[i])	multiply(re,Power(i,P[i]),re);
	while(q--)
	{
		foo = read<int>();
		printf("%lld\n",re[foo]);
	}	
	return 0;
}
