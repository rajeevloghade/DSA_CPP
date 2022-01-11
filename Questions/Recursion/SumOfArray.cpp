#include <iostream>
using namespace std;

int sumOfArray(int array[], int size)
{
    //base case
    if (size <= 0)
        return 0;

    return (sumOfArray(array, size - 1) + array[size - 1]); //recursive call
}

int main()
{
    int array[6] = {2, 4, 7, 9, 11, 14};
    int size = 6;
    cout << "Sum of array is : " << sumOfArray(array, size);
    return 0;
}