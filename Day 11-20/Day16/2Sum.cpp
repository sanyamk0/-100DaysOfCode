// Two Sum-Coding Ninjas
#include <bits/stdc++.h>
vector<pair<int, int>> twoSum(vector<int> &arr, int target, int n)
{
    vector<pair<int, int>> temp;
    int start = 0, end = n - 1;
    sort(arr.begin(), arr.end());
    while (start < end)
    {
        int sum = arr[start] + arr[end];
        if (sum == target)
        {
            temp.push_back({arr[start], arr[end]});
            start++, end--;
        }
        else if (sum < target)
        {
            start++;
        }
        else
        {
            end--;
        }
    }
    if (temp.empty())
    {
        temp.push_back({-1, -1});
    }
    return temp;
}
