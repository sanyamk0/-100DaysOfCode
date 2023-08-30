// Find Pattern in String - KMP Algorithm - CodingNinjas
#include <bits/stdc++.h>
bool findPattern(string p, string s)
{
    string temp = "";
    int n = p.size();
    for (int i = 0; i < s.size(); i++)
    {
        temp = s.substr(i, n);
        if (temp == p)
        {
            return true;
        }
    }
    return false;
}