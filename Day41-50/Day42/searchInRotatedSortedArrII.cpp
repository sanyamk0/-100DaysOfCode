// 81. Search in Rotated Sorted Array II - LeetCode
// Tried to solve it for Duplicate Elements But not Successful Will try Again
class Solution
{
private:
    int getPivot(vector<int> &nums, int n)
    {
        int s = 0, e = n - 1;
        int mid = s + (e - s) / 2;
        while (s < e)
        {
            if (nums[mid] >= 0)
            {
                s = mid + 1;
            }
            else
            {
                e = mid;
            }
            mid = s + (e - s) / 2;
        }
        return s;
    }
    bool binarySearch(vector<int> &nums, int target, int s, int e)
    {
        int mid = s + (e - s) / 2;
        while (s <= e)
        {
            if (nums[mid] == target)
            {
                return true;
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
        return false;
    }

public:
    bool search(vector<int> &nums, int target)
    {
        int n = nums.size();
        int pivot = getPivot(nums, n);
        if (nums[pivot] == target)
            return true;
        if (nums[pivot] <= target && nums[n - 1] >= target)
        {
            return binarySearch(nums, target, pivot, n - 1);
        }
        else
        {
            return binarySearch(nums, target, 0, pivot - 1);
        }
    }
};