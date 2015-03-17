LL NCK (LL n, LL r)
{
    if (r > n)
        return 0;

    LL ans = fact[n];
    LL res = (fact[r] * fact[n - r]) % mod;

    res = modpow (res, mod - 2, mod);

    ans = (ans * res) % mod;

    return ans;
}