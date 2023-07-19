// 4. Median of Two Sorted Arrays - LeetCode
class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        int m = nums1.size();
        int n = nums2.size();

        if (m > n)
        {
            return findMedianSortedArrays(nums2, nums1);
        }

        int left = 0;
        int right = m;
        int totalLength = (m + n + 1) / 2;

        while (left <= right)
        {
            int partitionNums1 = (left + right) / 2;
            int partitionNums2 = totalLength - partitionNums1;

            int maxLeftNums1 = (partitionNums1 == 0) ? INT_MIN : nums1[partitionNums1 - 1];
            int minRightNums1 = (partitionNums1 == m) ? INT_MAX : nums1[partitionNums1];

            int maxLeftNums2 = (partitionNums2 == 0) ? INT_MIN : nums2[partitionNums2 - 1];
            int minRightNums2 = (partitionNums2 == n) ? INT_MAX : nums2[partitionNums2];

            if (maxLeftNums1 <= minRightNums2 && maxLeftNums2 <= minRightNums1)
            {
                if ((m + n) % 2 == 0)
                {
                    return (max(maxLeftNums1, maxLeftNums2) + min(minRightNums1, minRightNums2)) / 2.0;
                }
                else
                {
                    return max(maxLeftNums1, maxLeftNums2);
                }
            }
            else if (maxLeftNums1 > minRightNums2)
            {
                right = partitionNums1 - 1;
            }
            else
            {
                left = partitionNums1 + 1;
            }
        }

        return 0.0;
    }
};