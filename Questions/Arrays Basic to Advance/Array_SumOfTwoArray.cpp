#include <iostream>
#include <vector>
using namespace std;

vector<int> sumOfTwoArray(vector<int> &arrayOne, int m, vector<int> &arrayTwo, int n)
{
    vector<int> arrTemp[] = {};
    int i = m - 1, j = n - 1;
    int carry = 0;
    while (i >= 0 && j >= 0)
    {
        int sum = arrayOne[i--] + arrayTwo[j--] + carry;
        carry = sum / 10;
        sum %= 10;
        arrTemp = sum;
    }
    while (i >= 0)
    {
        int sum = arrayOne[i--] + carry;
        carry = sum / 10;
        sum %= 10;
        arrTemp = sum;
    }
    while (j >= 0)
    {
        int sum = arrayTwo[j--] + carry;
        carry = sum / 10;
        sum %= 10;
        arrTemp = sum;
    }
    while (carry != 0)
    {
        int sum = carry;
        carry = sum / 10;
        sum %= 10;
        arrTemp = sum;
    }
    return arrTemp;
}
void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
}
int main()
{
    vector<int> arrayOne[5] = {1, 2, 3, 4};
    vector<int> arrayTwo[1] = {6};
    sumOfTwoArray(arrayOne, 5, arrayTwo, 1);
    return 0;
}