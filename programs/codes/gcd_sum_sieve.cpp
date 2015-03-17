
/* gcd(1,n) + gcd(2,n) +gcd(3,n) +.......+ gcd(n-1,n)	sieve */
for(i=1; i<SIZE; i++)
			for(j=2; i*j<SIZE; j++)
				g[i*j] += (LL)i*(LL)phi[j];
		for(i=2;i<SIZE;i++)
			g[i]+=g[i-1];