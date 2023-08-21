// 164. Maximum Gap _ LeetCode
class Solution
{
public:
    int maximumGap(vector<int> &nums)
    {
        int ans = 0, n = nums.size();
        sort(nums.begin(), nums.end());
        if (n < 2)
        {
            return 0;
        }
        for (int i = 0; i < n - 1; i++)
        {
            int diff = nums[i + 1] - nums[i];
            ans = max(ans, diff);
        }
        return ans;
    }
};