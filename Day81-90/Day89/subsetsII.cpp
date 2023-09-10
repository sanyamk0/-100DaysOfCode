// 90. Subsets II - LeetCode
class Solution
{
public:
    void solve(int index, vector<int> &nums, vector<int> &sub, vector<vector<int>> &ans)
    {
        ans.push_back(sub);
        for (int i = index; i < nums.size(); i++)
        {
            if (i > index && nums[i] == nums[i - 1])
                continue;
            sub.push_back(nums[i]);
            solve(i + 1, nums, sub, ans);
            sub.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        vector<vector<int>> ans;
        vector<int> sub;
        sort(nums.begin(), nums.end());
        solve(0, nums, sub, ans);
        return ans;
    }
};