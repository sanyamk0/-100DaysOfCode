// Factorial Of Large Number - CodingNinjas
#include <bits/stdc++.h>
long long int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}
string calculateFactorial(int n)
{
    long long int ans = factorial(n);
    return to_string(ans);
}