/* bhupkas */

using namespace std;

#include "bits/stdc++.h"

typedef long long LL;

#define MOD (LL)(1e6)

int S[3000005];
int A[1000005];

using std::string;

static struct IO {
	char tmp[1 << 10];

	// fast input routines
	char cur;

//#define nextChar() (cur = getc_unlocked(stdin))
//#define peekChar() (cur)
	inline char nextChar() { return cur = getc_unlocked(stdin); }
	inline char peekChar() { return cur; }

	inline operator bool() { return peekChar(); }
	inline static bool isBlank(char c) { return (c < '-' && c); }
	inline bool skipBlanks() { while (isBlank(nextChar())); return peekChar() != 0; }

	inline IO& operator >> (char & c) { c = nextChar(); return *this; }

	inline IO& operator >> (char * buf) {
		if (skipBlanks()) {
			if (peekChar()) {
				*(buf++) = peekChar();
				while (!isBlank(nextChar())) *(buf++) = peekChar();
			} *(buf++) = 0; } return *this; }

	inline IO& operator >> (string & s) {
		if (skipBlanks()) {	s.clear(); s += peekChar();
			while (!isBlank(nextChar())) s += peekChar(); }
		return *this; }

	inline IO& operator >> (double & d) { if ((*this) >> tmp) sscanf(tmp, "%lf", &d); return *this;	}

#define defineInFor(intType) \
	inline IO& operator >>(intType & n) { \
		if (skipBlanks()) { \
			int sign = +1; \
			if (peekChar() == '-') { \
				sign = -1; \
				n = nextChar() - '0'; \
			} else \
				n = peekChar() - '0'; \
			while (!isBlank(nextChar())) { \
				n += n + (n << 3) + peekChar() - 48; \
			} \
			n *= sign; \
		} \
		return *this; \
	}

defineInFor(int)
defineInFor(unsigned int)
defineInFor(long long)

	// fast output routines

//#define putChar(c) putc_unlocked((c), stdout)
	inline void putChar(char c) { putc_unlocked(c, stdout); }
	inline IO& operator << (char c) { putChar(c); return *this; }
	inline IO& operator << (const char * s) { while (*s) putChar(*s++); return *this; }

	inline IO& operator << (const string & s) { for (int i = 0; i < (int)s.size(); ++i) putChar(s[i]); return *this; }

	char * toString(double d) { sprintf(tmp, "%lf%c", d, '\0'); return tmp; }
	inline IO& operator << (double d) { return (*this) << toString(d); }


#define defineOutFor(intType) \
	inline char * toString(intType n) { \
		char * p = (tmp + 30); \
		if (n) { \
			bool isNeg = 0; \
			if (n < 0) isNeg = 1, n = -n; \
			while (n) \
				*--p = (n % 10) + '0', n /= 10; \
			if (isNeg) *--p = '-'; \
		} else *--p = '0'; \
		return p; \
	} \
	inline IO& operator << (intType n) { return (*this) << toString(n); }

defineOutFor(int)
defineOutFor(long long)

#define endl ('\n')
#define cout __io__
#define cin __io__
} __io__;


int main()
{	
	int t;
	cin >> t;
	int n,a,b,c,d;
	LL temp;
	LL cnt1,cnt2;
	bool foo;
	int mx;
	while(t--)
	{
		cin >> n >> a >> b >> c >> d;
		S[0] = d;
		mx = d;
		for(int i = 1 ; i < n ; ++i)
		{
			temp = (LL)a * (LL)S[i-1] * (LL)S[i-1] + (LL)b * (LL)S[i-1] + (LL)c;
			while(temp >= MOD)	temp -= MOD;
			S[i] = temp;
			mx = max(mx,S[i]);
		}
		if(n > 100000)
		{
			for(int i = 0 ; i <= mx ; ++i)	A[i] = 0;
			for(int i = 0 ; i < n ; ++i)	A[S[i]]++;
			cnt1 = cnt2 = 0;
			foo = true;
			for(int i = 0 ; i <= mx ; ++i)
			{
				if(A[i] & 1)	
				{
					if(foo)	cnt1 += i*(A[i]/2 + 1) , cnt2 += i*(A[i]/2);
					else	cnt2 += i*(A[i]/2 + 1) , cnt1 += i*(A[i]/2);
					foo = !foo;	
				}
				else	cnt1 += i*A[i]/2 , cnt2 += i*A[i]/2;
			}
		}
		else
		{
			sort(S,S+n);
			cnt1 = cnt2 = 0;
			for(int i = 0 ; i < n ; ++i)
				if(i&1)	cnt1 += S[i];
				else	cnt2 += S[i];
		}
		cout << (abs)(cnt1 - cnt2) << endl;
	}
	return 0;
}
