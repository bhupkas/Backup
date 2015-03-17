F[1] = 1;
for(int i = 2; i <= 10008; i++) {
F[i] = (-(m/i) * F[m % i]) % m + m}