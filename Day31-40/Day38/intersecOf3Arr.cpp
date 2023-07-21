// Common Elements In Three Sorted Arrays - CodingNinjas
#include <bits/stdc++.h>
bool binSearch(vector<int> &arr, int key)
{
    int s = 0, e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            return true;
        }
        if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return false;
}
vector<int> findCommonElements(vector<int> &a, vector<int> &b, vector<int> &c)
{
    vector<int> ans;
    for (int i = 0; i < a.size(); i++)
    {
        if (binSearch(b, a[i]) && binSearch(c, a[i]))
        {
            if (binSearch(ans, a[i]))
            {
                continue;
            }
            else
            {
                ans.push_back(a[i]);
            }
        }
    }
    return ans;
}