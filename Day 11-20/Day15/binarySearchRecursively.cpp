int binarySearch(vector<int> &nums, int start, int end, int target)
{
    int mid = start + (end - start) / 2;
    if (start > end)
        return -1;
    if (nums[mid] == target)
        return mid;
    if (nums[mid] > target)
        return binarySearch(nums, start, mid - 1, target);
    else
        return binarySearch(nums, mid + 1, end, target);
}
int search(vector<int> &nums, int target)
{
    int start = 0, end = nums.size() - 1;
    int ans = binarySearch(nums, start, end, target);
    return ans;
}