// 1. Two Sum-LeetCode
// Approach1
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> temp;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    temp.push_back(i);
                    temp.push_back(j);
                    break;
                }
            }
        }
        return temp;
    }
};

// Approach2
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<pair<int, int>> vp;
        for (int i = 0; i < nums.size(); i++)
        {
            vp.push_back({nums[i], i});
        }
        sort(vp.begin(), vp.end());
        int left = 0;
        int right = vp.size() - 1;
        while (left < right)
        {
            int sum = vp[left].first + vp[right].first;
            if (sum == target)
            {
                return {vp[left].second, vp[right].second};
            }
            else if (sum < target)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return {};
    }
};