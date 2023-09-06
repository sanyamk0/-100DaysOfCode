// Missing and repeating numbers - CodingNinjas
#include <bits/stdc++.h>

pair<int, int> missingAndRepeating(vector<int> &arr, int n)
{
    pair<int, int> p;
    for (int i = 0; i < n; i++)
    {
        int pos = arr[i] - 1;
        if (pos == i)
            continue;
        if (arr[pos] == arr[i])
        {
            p.second = arr[i];
            continue;
        }
        else
            swap(arr[pos], arr[i]);
        i--;
    }
    int totalSum = n * (n + 1) / 2;
    int sum = 0;
    for (int x : arr)
    {
        sum += x;
    }
    sum -= p.second;
    totalSum = totalSum - sum;
    p.first = totalSum;
    return p;
}
