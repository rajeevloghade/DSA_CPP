#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int n, int k)
{
    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;
    int index = -1;
    while (start <= end)
    {
        if (arr[mid] == k)
        {
            index = mid;
            end = mid - 1;
        }
        else if (arr[mid] < k)
            start = mid + 1;
        else
            end = mid - 1;

        mid = start + (end - start) / 2;
    }
    return index;
}
int lastOccurrence(int arr[], int n, int k)
{
    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;
    int index = -1;
    while (start <= end)
    {
        if (arr[mid] == k)
        {
            index = mid;
            start = mid + 1;
        }
        else if (arr[mid] < k)
            start = mid + 1;
        else
            end = mid - 1;

        mid = start + (end - start) / 2;
    }
    return index;
}

int main()
{
    int array[10] = {7, 5, 0, 0, 1, 1, 2, 2, 2, 2};

    cout << "firstOccurrence : " << firstOccurrence(array, 10, 2) << endl;
    cout << "lastOccurrence : " << lastOccurrence(array, 10, 2) << endl;

    cout << "Program ENDED" << endl;
    return 0;
}