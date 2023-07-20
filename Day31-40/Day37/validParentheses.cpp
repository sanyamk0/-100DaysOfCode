// 20. Valid Parentheses-LeetCode
class Solution
{
private:
    bool isMatching(char open, char close)
    {
        return (open == '(' && close == ')') ||
               (open == '{' && close == '}') ||
               (open == '[' && close == ']');
    }

public:
    bool isValid(string s)
    {
        stack<char> bracketStack;
        for (char ch : s)
        {
            if (ch == '(' || ch == '{' || ch == '[')
            {
                bracketStack.push(ch);
            }
            else
            {
                if (bracketStack.empty() || !isMatching(bracketStack.top(), ch))
                {
                    return false;
                }
                bracketStack.pop();
            }
        }
        return bracketStack.empty();
    }
};