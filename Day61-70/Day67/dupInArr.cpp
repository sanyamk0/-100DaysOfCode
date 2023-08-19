// Find Duplicate in Array - CodingNinjas
#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        ans = ans ^ i;
    }
    return ans;
}
