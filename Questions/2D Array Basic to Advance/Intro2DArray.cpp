#include <iostream>
using namespace std;

int main()
{
    int arr[10];     // 1D
    int arr2D[3][4]; // 2D arr2D[row][column]

    //taking inputs (row wise) for 2D array
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            cin >> arr2D[i][j];

    //taking inputs (column wise) for 2D array
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 3; j++)
            cin >> arr2D[j][i];

    //displaying 2D array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
            cout << arr2D[i][j] << " ";
        cout << endl;
    }
    return 0;
}