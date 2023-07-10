// 283. Move Zeroes-LeetCode
// 1st Approach
class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int i = 0;
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[j] != 0)
            {
                swap(nums[i], nums[j]);
                i++;
            }
        }
    }
};

// 2nd Approach
class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int i = 0;
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[j] == 0)
            {
                i++;
            }
            else if (i > 0)
            {
                swap(nums[j], nums[j - i]);
            }
        }
    }
};