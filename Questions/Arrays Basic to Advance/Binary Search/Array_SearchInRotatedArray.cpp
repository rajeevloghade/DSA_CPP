#include <iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int target)
{
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            start = mid + 1;
        else
            end = mid - 1;
        mid = start + (end - start) / 2;
    }
    return -1;
}
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
    return start;
}

int findPosition(int arr[], int size, int target)
{
    int pivot = getPivotElement(arr, size);
    if (arr[pivot] <= target && target <= arr[size-1])
        return binarySearch(arr, pivot, size - 1, target);
    else
        return binarySearch(arr, 0, pivot - 1, target);
}

int main()
{
    int array[5] = {7, 9, 1, 2, 3};
    cout << "Searched element at Index : " << findPosition(array, 5, 7) << endl;
    return 0;
}
/***
 * {1,2,3,7,9} => rotated by two element 
 * {7,9,1,2,3}
 * find targeted element which is 2
 * */