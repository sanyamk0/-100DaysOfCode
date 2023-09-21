// Gold mine problem - CodingNinjas
int maxGoldCollected(vector<vector<int>> mine, int n, int m)
{
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int nw = ((j > 0 && i > 0) ? mine[j - 1][i - 1] : 0);
            int w = (i > 0 ? mine[j][i - 1] : 0);
            int sw = ((j + 1 < n && i > 0) ? mine[j + 1][i - 1] : 0);
            mine[j][i] = mine[j][i] + max({nw, w, sw});
            if (i == m - 1)
            {
                ans = max(ans, mine[j][i]);
            }
        }
    }
    return ans;
}