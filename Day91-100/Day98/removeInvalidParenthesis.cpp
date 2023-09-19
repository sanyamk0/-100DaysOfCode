// 301. Remove Invalid Parentheses - LeetCode
class Solution
{
public:
    vector<string> ans;
    unordered_map<string, bool> mp;
    int getInvalid(string s)
    {
        stack<char> st;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
                st.push('(');
            else if (s[i] == ')')
            {
                if (!st.empty() && st.top() == '(')
                    st.pop();
                else
                    st.push(')');
            }
        }
        return st.size();
    }
    void removeInvalidParentheses(string s, int invalid)
    {
        if (mp[s] == 1)
            return;
        else
            mp[s] = 1;
        if (invalid < 0)
            return;
        if (invalid == 0)
        {
            if (!getInvalid(s))
                ans.push_back(s);
            return;
        }
        for (int i = 0; i < s.size(); i++)
        {
            string left = s.substr(0, i);
            string right = s.substr(i + 1);
            removeInvalidParentheses(left + right, invalid - 1);
        }
    }
    vector<string> removeInvalidParentheses(string s)
    {
        removeInvalidParentheses(s, getInvalid(s));
        return ans;
    }
};