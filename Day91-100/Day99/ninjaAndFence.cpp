#include <bits/stdc++.h>
long long mod;
long long ways(int n, int k, vector<long long> &dp)
{
    if (n == 1)
    {
        return k;
    }
    if (n == 2)
    {
        return (k + k * (k - 1)) % mod;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    return dp[n] = (((k - 1) * ways(n - 2, k, dp)) % mod +
                    (ways(n - 1, k, dp) * (k - 1)) % mod) %
                   mod;
}

int numberOfWays(int n, int k)
{
    mod = 1e9 + 7;
    vector<long long> dp(n + 1, -1);
    return ways(n, k, dp);
}