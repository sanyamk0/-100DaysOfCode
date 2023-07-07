// 121. Best Time to Buy and Sell Stock-LeetCode
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int x = 0;
        int y = INT_MAX;
        for (int i = 0; i < prices.size(); i++)
        {
            y = min(y, prices[i]);
            x = max(x, prices[i] - y);
        }
        return x;
    }
};