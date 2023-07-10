// Inplace rotate matrix 90 degree-CodingNinjas
#include <bits/stdc++.h>
void inplaceRotate(vector<vector<int>> &inputArray)
{
    int row = inputArray.size();
    int col = inputArray[0].size();
    vector<vector<int>> matrix;

    for (int j = col - 1; j >= 0; j--)
    {
        vector<int> newRow;
        for (int i = 0; i < row; i++)
        {
            newRow.push_back(inputArray[i][j]);
        }
        matrix.push_back(newRow);
    }

    int k = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            inputArray[i][j] = matrix[k][j];
        }
        k++;
    }
}

// Better Approach
#include <bits/stdc++.h>
void inplaceRotate(vector<vector<int>> &inputArray)
{
    int n = inputArray.size();

    // Transpose the matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(inputArray[i][j], inputArray[j][i]);
        }
    }

    // Reverse each col
    for (int j = 0; j < n; j++)
    {
        int s = 0, e = n - 1;
        while (s <= e)
        {
            swap(inputArray[s][j], inputArray[e][j]);
            s++;
            e--;
        }
    }
}