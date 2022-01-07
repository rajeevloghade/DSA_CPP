#include <iostream>
#include <vector>
using namespace std;

//APRROACH 2

void print2DVector(vector<vector<int>> &matrix)
{
    int row = matrix.size();
    int col = matrix[0].size();

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}
bool binarySerachIn2DArray(vector<vector<int>> &matrix, int target)
{
    int row = matrix.size();
    int col = matrix[0].size();

    int rowIndex = 0;
    int colIndex = col - 1;

    while (rowIndex < row && colIndex >= 0)
    {

        int element = matrix[rowIndex][colIndex];

        if (element == target)
            return 1;

        if (target > element)
            rowIndex++;
        else
            colIndex--;
    }

    return 0;
}

int main()
{
    vector<vector<int>> matrix;
    int value;
    cout << "Please enter matrix : ";
    for (int i = 0; i < 3; i++)
    {
        vector<int> temp;
        for (int j = 0; j < 4; j++)
        {
            cin >> value;
            temp.push_back(value);
        }
        matrix.push_back(temp);
    }

    //printing array
    print2DVector(matrix);

    int target;
    cout << "Please enter target : ";
    cin >> target;

    //binary search in 2D array
    if (binarySerachIn2DArray(matrix, target))
        cout << target << " Present in matrix.";
    else
        cout << target << " Not present in matrix.";

    return 0;
}
