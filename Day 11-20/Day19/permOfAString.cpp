// Permutations of a String - Coding Ninjas
#include <bits/stdc++.h>
void solve(string str, int index, vector<string> &ans)
{
    if (index >= str.length())
    {
        ans.push_back(str);
        return;
    }
    for (int i = index; i < str.length(); i++)
    {
        swap(str[index], str[i]);
        solve(str, index + 1, ans);
        swap(str[index], str[i]);
    }
}

vector<string> generatePermutations(string &str)
{
    vector<string> ans;
    int index = 0;
    solve(str, index, ans);
    sort(ans.begin(), ans.end());
    return ans;
}