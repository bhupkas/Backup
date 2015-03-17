LL modpow (LL a, LL b, LL mod)
{
    LL res = 1;
    while (b)
    {
        if (b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }

    return res;
}