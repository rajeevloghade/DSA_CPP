#include <iostream>
using namespace std;

int sumOfArray(int array[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    return sum;
}
int main()
{
    int array[10] = {2, 4, 6, 8, 9, 0, -1, 5, -7, -5};

    cout << "Sum of array is : " << sumOfArray(array, 10) << endl;
    return 0;
}