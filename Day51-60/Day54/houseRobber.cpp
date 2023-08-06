// 198. House Robber - LeetCode
// It will not work obviously but tried to do DP question. Will do it later on
class Solution
{
public:
    int rob(vector<int> &nums)
    {
        int rob = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i % 2 == 0)
            {
                rob += nums[i];
            }
        }
        return rob;
    }
};