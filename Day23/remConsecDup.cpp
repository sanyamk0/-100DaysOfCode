// Remove Consecutive Duplicates - Coding Ninjas
string removeDuplicate(string &s)
{
    if (s.length() == 1)
    {
        return s;
    }
    char c = s[s.length() - 1];
    s.pop_back();
    removeDuplicate(s);
    if (s[s.length() - 1] != c)
    {
        s.push_back(c);
    }
    return s;
}
