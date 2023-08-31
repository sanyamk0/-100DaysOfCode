// 6. Zigzag Conversion - LeetCode
class Solution
{
public:
    string convert(string s, int numRows)
    {
        vector<vector<char>> temp(numRows);
        if (numRows == 1)
        {
            return s;
        }
        int n = s.length();
        int i = 0, j = 0;
        char sign = '+';
        while (s[j] != '\0')
        {
            if (sign == '+')
            {
                temp[i].push_back(s[j++]);
                if ((i + 1) == numRows)
                {
                    sign = '-';
                    i--;
                }
                else
                {
                    i++;
                }
            }
            else
            {
                temp[i].push_back(s[j++]);
                if (i == 0)
                {
                    sign = '+';
                    i++;
                }
                else
                {
                    i--;
                }
            }
        }
        string res = "";
        for (int i = 0; i < numRows; i++)
        {
            for (int j = 0; j < temp[i].size(); j++)
            {
                res += temp[i][j];
            }
        }
        return res;
    }
};