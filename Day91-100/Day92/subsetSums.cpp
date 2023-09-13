class Solution
{
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> ans;
        if (N == 0)
        {
            ans.push_back(0);
            return ans;
        }
        vector<int> sol = subsetSums(arr, N - 1);
        int m = sol.size();
        for (int i = 0; i < m; i++)
        {
            ans.push_back(sol[i]);
        }
        for (int i = 0; i < m; i++)
        {
            ans.push_back(sol[i] + arr[N - 1]);
        }
        return ans;
    }
}