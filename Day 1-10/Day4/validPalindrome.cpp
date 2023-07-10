class Solution
{
public:
    char toLowerCase(char ch)
    {
        if (ch >= '0' && ch <= '9')
        {
            return ch;
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            return ch;
        }
        else
        {
            return ch - 'A' + 'a';
        }
    }
    bool isPalindrome(string s)
    {
        int start = 0, end = s.size() - 1;
        while (start <= end)
        {
            if (!(s[start] >= 'a' && s[start] <= 'z' ||
                  s[start] >= 'A' && s[start] <= 'Z' ||
                  s[start] >= '0' && s[start] <= '9'))
            {
                start++;
            }
            else if (!(s[end] >= 'a' && s[end] <= 'z' ||
                       s[end] >= 'A' && s[end] <= 'Z' ||
                       s[end] >= '0' && s[end] <= '9'))
            {
                end--;
            }
            else if (toLowerCase(s[start]) == toLowerCase(s[end]))
            {
                start++;
                end--;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};