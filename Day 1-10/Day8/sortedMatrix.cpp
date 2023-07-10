// Sorted Matrix-Coding Ninjas
#include <bits/stdc++.h>
vector<int> sortedMatrix(vector<vector<int>> &mat, int n)
{
    vector<int> temp;
    priority_queue<int, vector<int>, greater<int>> minHeap;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            minHeap.push(mat[i][j]);
        }
    }
    while (!minHeap.empty())
    {
        temp.push_back(minHeap.top());
        minHeap.pop();
    }
    return temp;
}