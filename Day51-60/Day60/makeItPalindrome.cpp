// Make It Palindrome - CodingNinjas
#include <bits/stdc++.h>
int palindrome(vector<int> A)
{
    int n = A.size(), i = 0, j = n - 1, operation = 0;
    while (i < j)
    {
        if (A[i] == A[j])
        {
            i++;
            j--;
        }
        else
        {
            if (A[i] < A[j])
            {
                A[i + 1] += A[i];
                i++;
            }
            else
            {
                A[j - 1] += A[j];
                j--;
            }
            operation++;
        }
    }
    return operation;
}