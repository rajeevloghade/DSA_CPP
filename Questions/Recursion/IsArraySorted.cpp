#include <iostream>
using namespace std;

bool isArraySorted(int array[], int size)
{
    //base case
    if (size == 0 || size == 1)
        return true;

    if (array[0] > array[1])
        return false;

    //recursive call
    isArraySorted(array + 1, size - 1);
}
int main()
{
    int array[6] = {2, 4, 7, 9, 11, 14};
    int size = 6;
    if (isArraySorted(array, size))
        cout << "Array is sorted" << endl;
    else
        cout << "Array is NOT sorted" << endl;
    return 0;
}