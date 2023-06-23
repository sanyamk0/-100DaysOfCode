// 287. Find the Duplicate Number-LeetCode
class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        unordered_set<int> set;
        for (int n : nums)
        {
            if (set.count(n) > 0)
            {
                return n;
            }
            set.insert(n);
        }
        return -1;
    }
};