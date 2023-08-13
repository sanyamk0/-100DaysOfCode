// Common Elements Present In All Rows Of Matrix - CodingNinjas
#include <bits/stdc++.h>
vector<int> findCommonElements(vector<vector<int>> &mat)
{
    vector<int> ans;
    if (mat.size() == 1)
    {
        return mat[0];
    }
    for (int i = 0; i < mat[0].size(); i++)
    {
        bool i = false;
        int temp1 = mat[0][i];
        for (int j = 1; j < mat.size(); j++)
        {
            vector<int> temp = mat[j];
            int cnt = 0;
            for (int k = 0; k < temp.size(); k++)
            {
                if (temp1 == temp[k])
                {
                    cnt++;
                }
            }
            if (cnt >= 1)
            {
                i = true;
            }
            else
            {
                i = false;
                break;
            }
        }
        if (i == true)
        {
            ans.push_back(temp1);
        }
    }
    sort(ans.begin(), ans.end());
    for (int i = 1; i < ans.size();)
    {
        if (ans[i - 1] == ans[i])
        {
            ans.erase(ans.begin() + i);
        }
        else
        {
            i++;
        }
    }
    return ans;
}