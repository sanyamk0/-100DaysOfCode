// 11. Container With Most Water - LeetCode
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int i = 0, j = height.size() - 1;
        int area = INT_MIN;
        while (i < j)
        {
            int product = (j - i) * (min(height[i], height[j]));
            if (area < product)
            {
                area = product;
            }
            if (height[i] < height[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        return area;
    }
};
