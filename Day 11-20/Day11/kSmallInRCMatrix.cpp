// Kth Minimum Floor-CodingNinjas
#include <bits/stdc++.h>
int kMinFloor(vector<vector<int>> &squareCity, int n, int k)
{
    vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            temp.push_back(squareCity[i][j]);
        }
    }
    sort(temp.begin(), temp.end());
    return temp[k - 1];
}