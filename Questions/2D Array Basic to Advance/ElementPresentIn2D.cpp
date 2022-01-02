#include <iostream>
using namespace std;

bool isPresent(int arr2D[][4], int target, int row, int col)
{
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            if (arr2D[i][j] == target)
                return 1;
    return 0;
}
int main()
{
    int arr2D[3][4]; // 2D arr2D[row][column]

    //taking inputs (row wise) for 2D array
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            cin >> arr2D[i][j];

    cout << "Please enter target : " << endl;
    int target;
    cin >> target;
    if (isPresent(arr2D, target, 3, 4))
        cout << target << " Present" << endl;
    else
        cout << target << " Not Present" << endl;

    return 0;
}