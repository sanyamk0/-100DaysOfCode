// 219. Contains Duplicate II - Leetcode
// Brute Force Gives Time Limit Exceeded
class Solution
{
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k)
    {
        int n = nums.size();
        if (n == 1) // agar size hi 1 h toh repeat kaise hi hoga
        {
            return false;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n && j <= i + k; j++)
            {
                if (nums[i] == nums[j])
                {
                    return true;
                }
            }
        }
        return false;
    }
};
// Optimised
class Solution
{
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k)
    {
        unordered_set<int> s;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i > k)
                s.erase(nums[i - k - 1]);

            if (s.find(nums[i]) != s.end())
                return true;

            s.insert(nums[i]);
        }
        return false;
    }
};