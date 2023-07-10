// 204. Count Primes
// This Code will Give TLE for Much Greater value of n
class Solution
{
private:
    bool isPrime(int n)
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }

public:
    int countPrimes(int n)
    {
        int count = 0;
        for (int i = 2; i < n; i++)
        {
            if (isPrime(i))
            {
                count++;
            }
        }
        return count;
    }
};
// SieveOfEratosthenes-Better Approach for Greater Value of n
class Solution
{
public:
    int countPrimes(int n)
    {
        vector<bool> prime(n + 1, true);
        prime[0] = prime[1] = false;
        int count = 0;
        for (int i = 2; i < n; i++)
        {
            if (prime[i])
            {
                count++;
                for (int j = 2 * i; j < n; j = j + i)
                {
                    prime[j] = false;
                }
            }
        }
        return count;
    }
};