// Power of Two-CodingNinjas
bool isPowerOfTwo(int n)
{
    int count = 0;
    if (n <= 0)
        return false;
    while (n != 0)
    {
        if (n & 1)
        {
            count++;
        }
        n = n >> 1;
    }
    return count == 1;
}