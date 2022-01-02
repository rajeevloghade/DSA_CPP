#include <iostream>
using namespace std;

int rowWiseMaximumSum(int arr2D[][4], int row, int col)
{
    int maximum = INT8_MIN;
    int rowIndex;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
            sum += arr2D[i][j];
        if (maximum < sum)
        {
            maximum = sum;
            rowIndex = i;
        }
    }
    return rowIndex;
}

void rowWiseSum(int arr2D[][4], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
            sum += arr2D[i][j];
        cout << "Sum of " << i << " row : " << sum << endl;
    }
}
int main()
{

    int arr2D[3][4]; // 2D arr2D[row][column]

    cout << "Please enter elements : ";
    //taking inputs (row wise) for 2D array
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            cin >> arr2D[i][j];

    rowWiseSum(arr2D, 3, 4);
    cout<<"The max sum of 2D array at row index : "<<rowWiseMaximumSum(arr2D, 3, 4);

    return 0;
}