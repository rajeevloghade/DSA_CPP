#include <iostream>
using namespace std;

int getPivotElement(int arr[], int size)
{
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (arr[mid] > arr[0])
            start = mid + 1;
        else
            end = mid;
        mid = start + (end - start) / 2;
    }

    return arr[start];
}

int main()
{
    int array[7] = {7, 9, 10, 11, 1, 2, 3};
    cout << "Pivot element : " << getPivotElement(array, 7) << endl;
    return 0;
}
/***
 * {1,2,3,7,9} => rotated by two element 
 * {7,9,1,2,3}
 * Pivot elemet is : 1 (index is 2)
 * */