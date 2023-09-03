// Pair Difference K - CodingNinjas
string isPairDifferenceK(vector<int> arr, int n, int k)
{
    int i = 0, j = i + 1;
    string s = "";
    while (i < n - 1 && j < n)
    {
        int element = arr[j] - arr[i];
        if (element == k)
        {
            return "Yes";
        }
        else if (element < k)
        {
            j++;
        }
        else
        {
            i++;
        }
    }
    return "No";
}
