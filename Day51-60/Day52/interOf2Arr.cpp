// 349. Intersection of Two Arrays - LeetCode
class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        vector<int> temp;
        for (int num : nums2)
        {
            if (set1.count(num))
            {
                temp.push_back(num);
                set1.erase(num);
            }
        }
        return temp;
    }
};