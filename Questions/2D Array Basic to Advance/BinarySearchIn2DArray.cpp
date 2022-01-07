#include <iostream>
#include <vector>
using namespace std;

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
    int start = 0;
    int end = row * col - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        int element = matrix[mid / col][mid % col];
        if (element == target)
            return 1;

        if (target > element)
            start = mid + 1;
        else
            end = mid - 1;

        mid = start + (end - start) / 2;
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