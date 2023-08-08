// Maximum Product Subarray - CodingNinjas
#include <bits/stdc++.h>
int maximumProduct(vector<int> &arr, int n)
{
    int product = arr[0], maxEnd = arr[0], minEnd = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < 0)
        {
            swap(maxEnd, minEnd);
        }
        maxEnd = max(arr[i], maxEnd * arr[i]);
        minEnd = min(arr[i], minEnd * arr[i]);
        product = max(product, maxEnd);
    }
    return product;
}