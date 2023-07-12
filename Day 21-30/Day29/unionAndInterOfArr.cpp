// Find similarities between two arrays.-CodingNinjas
#include <bits/stdc++.h>
pair<int, int> findSimilarity(vector<int> arr1, vector<int> arr2, int n, int m)
{
    pair<int, int> temp;
    int i = 0, j = 0, count = 0;
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            count++;
            i++, j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    int unionNum = n + m - count;
    temp = {count, unionNum};
    return temp;
}