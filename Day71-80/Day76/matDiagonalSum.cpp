// 1572. Matrix Diagonal Sum - LeetCode
class Solution
{
public:
    int diagonalSum(vector<vector<int>> &mat)
    {
        int row = mat.size(), col = mat[0].size(), sum = 0;
        for (int i = 0; i < row; i++)
        {
            sum += mat[i][i];
        }
        for (int i = 0; i < row; i++)
        {
            if (i != row - 1 - i)
                sum += mat[i][row - 1 - i];
        }
        return sum;
    }
};