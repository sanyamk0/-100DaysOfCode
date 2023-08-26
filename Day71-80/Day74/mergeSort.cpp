// Merge Sort In-Place - CodingNinjas
void merge(vector<int> &arr, int start, int mid, int end)
{
    int start2 = mid + 1;
    if (arr[mid] <= arr[start2])
    {
        return;
    }
    while (start <= mid && start2 <= end)
    {
        if (arr[start] <= arr[start2])
        {
            start++;
        }
        else
        {
            int i = start2;
            int val = arr[start2];
            while (i != start)
            {
                arr[i] = arr[i - 1];
                i--;
            }
            arr[start] = val;
            start2++;
            start++;
            mid++;
        }
    }
}
void mergeSort(vector<int> &arr, int low, int high)
{
    if (low >= high)
    {
        return;
    }
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);
}
vector<int> mergeSort(vector<int> &arr)
{
    int n = arr.size();
    mergeSort(arr, 0, n - 1);
    return arr;
}