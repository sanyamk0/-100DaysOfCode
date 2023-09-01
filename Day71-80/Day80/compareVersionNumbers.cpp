// 165. Compare Version Numbers - LeetCode
class Solution
{
public:
    int compareVersion(string version1, string version2)
    {
        int s1 = 0, s2 = 0, n1 = version1.length(), n2 = version2.length();
        while (s1 < n1 || s2 < n2)
        {
            int v1 = 0, v2 = 0;
            while (s1 < n1 && version1[s1] != '.')
                v1 = v1 * 10 + (version1[s1++] - '0');
            while (s2 < n2 && version2[s2] != '.')
                v2 = v2 * 10 + (version2[s2++] - '0');
            if (v1 < v2)
                return -1;
            else if (v1 > v2)
                return 1;
            s1++;
            s2++;
        }
        return 0;
    }
};