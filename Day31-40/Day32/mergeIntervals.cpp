// 56. Merge Intervals - LeetCode
class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> mergedIntervals;
        mergedIntervals.push_back(intervals[0]);
        for (int i = 1; i < intervals.size(); i++)
        {
            vector<int> &current = intervals[i];
            vector<int> &previous = mergedIntervals.back();

            if (current[0] <= previous[1])
            {
                previous[1] = max(previous[1], current[1]);
            }
            else
            {
                mergedIntervals.push_back(current);
            }
        }
        return mergedIntervals;
    }
};