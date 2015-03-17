#define N 1005

int bpGraph[N][N];

int matchR[N];

bool seen[N];

bool bpm(int u)
{
    for (int v = 0; v < cnt2; v++)
    {
        if (bpGraph[u][v] && !seen[v])
        {
            seen[v] = true; 
            if (matchR[v] < 0 || bpm(matchR[v]))
            {
                matchR[v] = u;
                return true;
            }
        }
    }
    return false;
}
 
int maxBPM()
{
    memset(matchR, -1, sizeof(matchR));
    int result = 0;
    for (int u = 0; u < cnt1; u++)
    {
        memset(seen, 0, sizeof(seen));
        if (bpm(u))
            result++;
    }
    return result;
}

