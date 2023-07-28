// 202. Happy Number - LeetCode
// Not Working
class Solution
{
private:
    int count(int n)
    {
        if (n == 0)
        {
            return 1;
        }
        int count = 0;
        while (n != 0)
        {
            count++;
            n = n / 10;
        }
        return count;
    }
    bool solve(int n, int cnt)
    {
        if (cnt == 1)
        {
            return n * n;
        }
        while (n != 1)
        {
            int sum = 0;
            for (int i = 0; i < cnt; i++)
            {
                int digit = n % 10;
                int square = digit * digit;
                sum += square;
                n = n / 10;
            }
            n = sum;
            cnt = count(n);
        }
        return n == 1;
    }

public:
    bool isHappy(int n)
    {
        int cnt = count(n);
        bool ans = solve(n, cnt);
        return ans;
    }
};