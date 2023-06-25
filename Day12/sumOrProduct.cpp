// Sum or Product-CodingNinjas
#include <bits/stdc++.h>
long long int sumOrProduct(long long int n, long long int q)
{
    long long int sum = 0, product = 1;
    int mod = pow(10, 9) + 7;
    if (q == 1)
    {
        for (long long int i = 1; i <= n; i++)
        {
            sum += i;
        }
        return sum;
    }
    if (q == 2)
    {
        for (long long int i = 1; i <= n; i++)
        {
            product = (product * i) % mod;
        }
        return product;
    }
}