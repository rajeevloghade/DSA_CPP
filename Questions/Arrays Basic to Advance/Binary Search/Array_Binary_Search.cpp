#include <iostream>
using namespace std;

//BinarySearch only applies on monoltonic (increasing or decreasing array only)
int binarySearch(int array[], int size, int key)
{
    //find mid element of array
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;    // to make it better (start+end)/2;

    while (start <= end)
    {                             
        if (array[mid] == key)              //if element found return index(mid)
            return mid;
        else if (array[mid] < key)          //if not found and element key<mid element go to right
            start = mid + 1;
        else                                //if not found and element key<mid element go to right
            end = mid - 1;

        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int array[10] = {-7, -5, -1, 0, 2, 4, 5, 6, 8, 9};

    cout << "Index of 9 is : " << binarySearch(array, 10, 9) << endl;
    cout << "Index of 0 is : " << binarySearch(array, 10, 0) << endl;
    cout << "Index of -7 is : " << binarySearch(array, 10, -7) << endl;
    cout << "Index of 7 is : " << binarySearch(array, 10, 7) << endl;
    cout << "Index of -1 is : " << binarySearch(array, 10, -1) << endl;
    cout << "Program ENDED" << endl;
    return 0;
}