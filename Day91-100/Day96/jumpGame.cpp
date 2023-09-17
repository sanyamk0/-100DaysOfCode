// Jump Game -CodingNinjas
int minJumps(vector<int> &arr, int n)
{
    int last = 0, current = 0, count = 0;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        last = max(last, i + arr[i]);
        if (i == current)
        {
            current = last;
            count++;
        }
    }
    if (current >= arr.size() - 1)
    {
        return count;
    }
    else
    {
        return -1;
    }
}
