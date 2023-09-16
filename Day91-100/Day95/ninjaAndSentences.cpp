// Ninja And Sentences - CodingNinjas
#include <bits/stdc++.h>
void solve(vector<string> &s, int row, vector<vector<string>> &arr,
           vector<vector<string>> &ans)
{
    if (row >= arr.size())
    {
        ans.push_back(s);
        return;
    }
    for (int i = 0; i < arr[0].size(); i++)
    {
        s.push_back(arr[row][i]);
        solve(s, row + 1, arr, ans);
        s.pop_back();
    }
}
void createSentences(vector<vector<string>> &arr, vector<vector<string>> &ans)
{
    vector<string> s;
    solve(s, 0, arr, ans);
}