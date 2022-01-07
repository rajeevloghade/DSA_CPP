#include <iostream>
#include <vector>
using namespace std;

void printLikeWave(int arr2D[][4], int nRows, int mCols)
{
    vector<int> ans;

    for (int col = 0; col < mCols; col++)
    {
        if (col & 1) //ODD
        {
            for (int row = nRows - 1; row >= 0; row--)
                cout << arr2D[row][col] << " ";
            //    ans.push_back(arr[row][col]);
        }
        else //EVEN
        {
            for (int row = 0; row < nRows; row++)
                cout << arr2D[row][col] << " ";
            // ans.push_back(arr[row][col]);
        }
    }
    // return ans;
}

int main()
{
    int arr2D[3][4]; // 2D arr2D[row][column]

    cout << "Please enter elements : ";
    //taking inputs (row wise) for 2D array
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            cin >> arr2D[i][j];

    //displaying 2D array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
            cout << arr2D[i][j] << " ";
        cout << endl;
    }
    
    printLikeWave(arr2D, 3, 4);
    return 0;
}