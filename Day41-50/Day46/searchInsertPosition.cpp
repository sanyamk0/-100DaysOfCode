// 35. Search Insert Position - LeetCode
class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int n = nums.size(), s = 0, e = n - 1;
        int mid = s + (e - s) / 2;
        while (s <= e)
        {
            if (nums[mid] == target)
            {
                return mid;
            }
            if (nums[mid] < target)
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
            mid = s + (e - s) / 2;
        }
        return e + 1;
    }
};