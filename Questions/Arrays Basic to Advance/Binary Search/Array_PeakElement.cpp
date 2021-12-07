#include <iostream>
using namespace std;

int getPeakElement(int arr[], int size)
{
    int start = 0, end = size - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
            start = mid + 1;
        else
            end = mid;
        mid = start + (end - start) / 2;
    }
    return arr[start];
}

int main()
{
    int array[5] = {0, 1, 6, 4, 2};

    cout << "Peak element : " << getPeakElement(array, 5) << endl;
    return 0;
}