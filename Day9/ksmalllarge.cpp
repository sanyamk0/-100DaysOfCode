// Kth Smallest and Largest Element of Array-Coding injas
#include <bits/stdc++.h>
vector<int> kthSmallLarge(vector<int> &arr, int n, int k)
{
    sort(arr.begin(), arr.end());
    vector<int> temp;
    temp.reserve(2);
    temp.push_back(arr[k - 1]);
    temp.push_back(arr[n - k]);
    return temp;
}