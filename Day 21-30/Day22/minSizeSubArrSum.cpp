// 209. Minimum Size Subarray Sum - LeetCode
// Brute Force Approach Gives TLE
class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        vector<int> ans;
        int min = INT_MAX;
        for (int i = 0; i < nums.size(); i++)
        {
            int sum = 0;
            for (int j = i; j < nums.size(); j++)
            {
                sum += nums[j];
                if (sum >= target)
                {
                    ans.push_back(j - i + 1);
                    break;
                }
            }
        }
        for (int k = 0; k < ans.size(); k++)
        {
            if (ans[k] < min)
            {
                min = ans[k];
            }
        }
        if (min == INT_MAX)
        {
            return 0;
        }
        else
        {
            return min;
        }
    }
};

// Better Approach
class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int minLength = INT_MAX;
        int windowSum = 0;
        int left = 0;

        for (int right = 0; right < nums.size(); right++)
        {
            windowSum += nums[right];

            while (windowSum >= target)
            {
                minLength = min(minLength, right - left + 1);
                windowSum -= nums[left];
                left++;
            }
        }

        return (minLength == INT_MAX) ? 0 : minLength;
    }
};
