// Value Equal To The Index Value-CodingNinjas
#include <bits/stdc++.h>
vector<int> valueEqualToIndices(vector<int> &numArray, int n)
{
    vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        if (numArray[i] == i)
        {
            temp.push_back(i);
        }
    }
    if (temp.empty())
    {
        temp.push_back(-1);
        return temp;
    }
    else
    {
        return temp;
    }
}