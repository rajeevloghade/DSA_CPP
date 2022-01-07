#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> array)
{
    int size = array.size();
    cout << "Spiral Print : ";
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}

vector<int> spiralPrint(vector<vector<int>> matrix)
{
    vector<int> answer;
    //find out the row and column size
    int row = matrix.size();
    int column = matrix[0].size();

    //for while loop
    int count = 0;
    int total = row * column;

    //index initialization
    int startingRow = 0;
    int endingRow = row - 1;
    int startingCol = 0;
    int endingCol = column - 1;

    while (count < total)
    {
        //print starting row
        for (int i = startingCol; i <= endingCol && count < total; i++)
        {
            cout << "starting row " << matrix[startingRow][i] << endl;
            answer.push_back(matrix[startingRow][i]);
            count++;
        }
        startingRow++;
        //print ending column
        for (int i = startingRow; i <= endingRow && count < total; i++)
        {
            cout << "ending column " << matrix[i][endingCol] << endl;
            answer.push_back(matrix[i][endingCol]);
            count++;
        }
        endingCol--;
        //print ending row
        for (int i = endingCol; i >= startingCol && count < total; i--)
        {
            cout << "ending row " << matrix[endingRow][i] << endl;
            answer.push_back(matrix[endingRow][i]);
            count++;
        }
        endingRow--;
        //print starting column
        for (int i = endingRow; i >= startingRow && count < total; i--)
        {
            cout << "starting column " << matrix[i][startingCol] << endl;
            answer.push_back(matrix[i][startingCol]);
            count++;
        }
        startingCol++;
    }

    return answer;
}
int main()
{
    //creating 2D vector
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    printVector(spiralPrint(matrix));
    return 0;
}