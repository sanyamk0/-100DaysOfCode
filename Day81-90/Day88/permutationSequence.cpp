// 60. Permutation Sequence - LeetCode
class Solution
{
public:
    void solve(string &s, int index, vector<string> &res)
    {
        if (index == s.size())
        {
            res.push_back(s);
            return;
        }
        for (int i = index; i < s.size(); i++)
        {
            swap(s[i], s[index]);
            solve(s, index + 1, res);
            swap(s[i], s[index]);
        }
    }
    string getPermutation(int n, int k)
    {
        string s;
        vector<string> res;
        for (int i = 1; i <= n; i++)
        {
            s.push_back(i + '0');
        }
        solve(s, 0, res);
        sort(res.begin(), res.end());
        auto it = res.begin() + (k - 1);
        return *it;
    }
};