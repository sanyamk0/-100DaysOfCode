// Trapping Rain Water - CodingNinjas
long long getTrappedWater(long long *arr, int n)
{
    if (n == 2)
    {
        return 0;
    }
    int s = 0, e = n - 1;
    long long lmax = 0, rmax = 0, ans = 0;
    while (s <= e)
    {
        if (arr[s] <= arr[e])
        {
            if (arr[s] < lmax)
            {
                ans += lmax - arr[s];
            }
            else
            {
                lmax = arr[s];
            }
            s++;
        }
        else
        {
            if (arr[e] < rmax)
            {
                ans += rmax - arr[e];
            }
            else
            {
                rmax = arr[e];
            }
            e--;
        }
    }
    return ans;
}