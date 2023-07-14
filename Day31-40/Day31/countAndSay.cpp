// 38. Count and Say-LeetCode
class Solution
{
public:
    string countAndSay(int n)
    {
        if (n == 1)
        {
            return "1";
        }
        string prevTerm = countAndSay(n - 1);
        string currentTerm = "";
        int count = 1;
        for (int i = 0; i < prevTerm.length(); i++)
        {
            if (prevTerm[i] == prevTerm[i + 1])
            {
                count++;
            }
            else
            {
                currentTerm += to_string(count) + prevTerm[i];
                count = 1;
            }
        }
        return currentTerm;
    }
};
