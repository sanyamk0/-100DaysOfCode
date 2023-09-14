// Edit Distance - CodingNinjas
int editDistance(string str1, string str2)
{
    int n = str1.size();
    int m = str2.size();
    vector<int> prev(m + 1, 0), curr(m + 1, 0);
    for (int i = 0; i <= m; i++)
    {
        prev[i] = i;
    }
    for (int j = 1; j <= n; j++)
    {
        curr[0] = j;
        for (int i = 1; i <= m; i++)
        {
            if (str1[j - 1] == str2[i - 1])
                curr[i] = prev[i - 1];
            else
                curr[i] = 1 + min(curr[i - 1], min(prev[i], prev[i - 1]));
        }
        prev = curr;
    }
    return prev[m];
}