#include <iostream>
using namespace std;
bool checkSortedAndRotated(int array[], int size)
{
    int count = 0;
    for (int i = 1; i < size; i++)
    {
        if (array[i - 1] > array[i])
            count++;
    }
    if (array[size - 1] > array[0])
        count++;

    return count <= 1;
}

int main()
{
    int array[5] = {3,5,7,1,6};
    if (checkSortedAndRotated(array, 5))
        cout << "Array is Sorted and Rotated.";
    else
        cout << "Array isn't Sorted and Rotated.";
    return 0;
}