// Calculate square of a number-CodingNinjas
#include <bits/stdc++.h>
int calculateSquare(int num)
{
    if (num < 0)
    {
        num = -num;
    }
    int square = 0, i = num;
    while (i != 0)
    {
        square = square + num;
        i--;
    }
    return square;
}