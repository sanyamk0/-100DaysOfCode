// 268. Missing Number - LeetCode
// O(nlog(n))
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int ans = -1;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != i)
            {
                ans = i;
                break;
            }
        }
        if (ans == -1)
        {
            return nums.size();
        }
        else
        {
            return ans;
        }
    }
};
// Optimised Approach- O(n)
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int ans = 0;
        for (int i = 0; i <= nums.size(); i++)
        {
            ans = ans ^ i;
        }
        for (int j = 0; j < nums.size(); j++)
        {
            ans = ans ^ nums[j];
        }
        return ans;
    }
};