// Sum Of Two Array-CodingNinjas
#include <bits/stdc++.h>
vector<int> findArraySum(vector<int> &a, int n, vector<int> &b, int m)
{
    vector<int> ans;
    int i = n - 1;
    int j = m - 1;
    int carry = 0;
    // Sum krlo
    while (i >= 0 && j >= 0)
    {
        int sum = a[i] + b[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }
    // Ho skta h pehla array dusre se lmba ho
    while (i >= 0)
    {
        int sum = a[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }
    // Ho skta h dusra array pehle se lmba ho
    while (j >= 0)
    {
        int sum = b[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }
    // Ho skta h dono array barabar ho but akhiri me carry!=0
    // Jab carry!=0 hoga tbhi push krenge vrna nhi
    while (carry != 0)
    {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
    }
    // Jo values push kri h vo opposite order me hui h iske liye ans vector ko
    // reverse krna hoga
    reverse(ans.begin(), ans.end());
    return ans;
}