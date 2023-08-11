// Rahul And Minimum Subarray - CodingNinjas
#include <bits/stdc++.h>
int minSubArrayLen(vector<int> &arr, int target, int n)
{
    int minLen = INT_MAX, sum = 0, left = 0;
    for (int right = 0; right < n; right++)
    {
        sum += arr[right];
        while (sum > target)
        {
            minLen = min(minLen, right - left + 1);
            sum -= arr[left];
            left++;
        }
    }
    return (minLen == INT_MAX) ? 0 : minLen;
}
