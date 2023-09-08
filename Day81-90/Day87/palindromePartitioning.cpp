// 131. Palindrome Partitioning - LeetCode
class Solution
{
public:
    bool isPalindrome(const string &s, int start, int end)
    {
        while (start < end)
        {
            if (s[start] != s[end])
            {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
    void calculate(const string &s, int start, vector<string> &current, vector<vector<string>> &res)
    {
        if (start == s.length())
        {
            res.push_back(current);
            return;
        }
        for (int end = start; end < s.length(); end++)
        {
            if (isPalindrome(s, start, end))
            {
                current.push_back(s.substr(start, end - start + 1));
                calculate(s, end + 1, current, res);
                current.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s)
    {
        vector<vector<string>> res;
        vector<string> current;
        calculate(s, 0, current, res);
        return res;
    }
};
