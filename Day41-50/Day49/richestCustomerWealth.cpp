// 1672. Richest Customer Wealth - LeetCode
class Solution
{
public:
    int maximumWealth(vector<vector<int>> &accounts)
    {
        int ans = INT_MIN;
        int m = accounts.size(), n = accounts[0].size();
        for (int i = 0; i < m; i++)
        {
            int sum = 0;
            for (int j = 0; j < n; j++)
            {
                sum += accounts[i][j];
            }
            if (sum > ans)
            {
                ans = sum;
            }
        }
        return ans;
    }
};