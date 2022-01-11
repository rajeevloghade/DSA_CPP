#include <iostream>
using namespace std;

bool binarySearch(int array[], int start, int size, int target)
{
    int end = size - 1;
    //base case
    if (start > end)
        return false;

    //processing
    int mid = start + (end - start) / 2;
    if (array[mid] == target)
        return true;
    else if (target > array[mid])
        return binarySearch(array, mid + 1, size, target); //recursive call
    else
        return binarySearch(array, 0, mid - 1, target);
}
int main()
{
    int array[10] = {1, 3, 7, 15, 18, 20, 25, 33, 36, 40};
    int size = 10;
    cout << "Please enter target : ";
    int target;
    cin >> target;
    if (binarySearch(array, 0, size, target))
        cout << target << " Found" << endl;
    else
        cout << target << " NOT Found" << endl;
    return 0;
}