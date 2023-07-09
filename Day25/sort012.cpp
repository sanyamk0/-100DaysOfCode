// Sort 0 1 2-Coding Ninjas
#include <bits/stdc++.h>
void sort012(int *arr, int n)
{
    int i = 0, zeroPos = 0, twoPos = n - 1;
    while (i <= twoPos)
    {
        if (arr[i] == 0)
        {
            swap(arr[i], arr[zeroPos]);
            i++, zeroPos++;
        }
        else if (arr[i] == 2)
        {
            swap(arr[i], arr[twoPos]);
            twoPos--;
        }
        else
        {
            i++;
        }
    }
}