#include <iostream>
#include <vector>
using namespace std;

print2DVector(vector<vector<int>> array)
{
    for (int i = 0; i < array.size(); i++)
    {
        for (int j = 0; j < array[i].size(); j++)
            cout << array[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    int arr[10];     // 1D
    int arr2D[3][4]; // 2D arr2D[row][column]

    //taking inputs (row wise) for 2D array
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            cin >> arr2D[i][j];

    // //taking inputs (column wise) for 2D array
    // for (int i = 0; i < 4; i++)
    //     for (int j = 0; j < 3; j++)
    //         cin >> arr2D[j][i];

    //displaying 2D array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
            cout << arr2D[i][j] << " ";
        cout << endl;
    }

    //creating 2D vector
    vector<vector<int>> array; // = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    //taking inputs (row wise) for 2D vector
    int val;
    for (int i = 0; i < 3; i++)
    {
        vector<int> two;
        for (int j = 0; j < 4; j++)
        {
            cin >> val;
            two.push_back(val);
        }
        array.push_back(two);
    }

    print2DVector(array);
    return 0;
}