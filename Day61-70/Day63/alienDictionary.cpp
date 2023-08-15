// 953. Verifying an Alien Dictionary - LeetCode
class Solution
{
public:
    bool isAlienSorted(vector<string> &words, string order)
    {
        map<char, char> mp;
        char s = 'a';
        for (int i = 0; i < order.size(); i++)
        {
            char x = order[i];
            mp[x] = s;
            s++;
        }
        for (int i = 0; i < words.size(); i++)
        {
            for (int j = 0; j < words[i].size(); j++)
            {
                words[i][j] = mp[words[i][j]];
            }
        }
        if (is_sorted(words.begin(), words.end()))
            return true;
        return false;
    }
};