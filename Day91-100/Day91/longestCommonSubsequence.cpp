// 1143. Longest Common Subsequence - LeetCode
class Solution
{
public:
    int lseq(int n, int m, string s1, string s2)
    {
        if (n == 0 || m == 0)
            return 0;
        if (s1[n - 1] == s2[m - 1])
        {
            return 1 + lseq(n - 1, m - 1, s1, s2);
        }
        else
        {
            return max(lseq(n, m - 1, s1, s2), lseq(n - 1, m, s1, s2));
        }
    }
    int longestCommonSubsequence(string text1, string text2)
    {
        int n1 = text1.size(), n2 = text2.size();
        return lseq(n1, n2, text1, text2);
    }
};