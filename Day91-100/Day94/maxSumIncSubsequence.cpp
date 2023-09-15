// Maximum Sum Increasing Subsequence - CodingNinjas
#include <bits/stdc++.h>
int maxIncreasingDumbbellsSum(vector<int> &rack, int n)
{
    int ans = rack[0];
    vector<int> temp = rack;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (rack[i] > rack[j])
            {
                if (temp[j] + rack[i] > temp[i])
                {
                    temp[i] = temp[j] + rack[i];
                }
            }
        }
        ans = max(ans, temp[i]);
    }
    return ans;
}