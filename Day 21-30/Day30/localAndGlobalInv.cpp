// Equal global and local inversions - CodingNinjas
bool isEqualInversions(vector<int> &arr, int n)
{
    int local = 0, global = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                global++;
                if (j == i + 1)
                {
                    local++;
                }
            }
        }
    }
    return local == global;
}
