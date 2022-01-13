#include <iostream>
using namespace std;

void printArray(int array[], int size)
{
    cout << "Quick Sort : ";
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}

int partition(int *array, int start, int end)
{
    int pivot = array[start];
    int count = 0;

    //counting the element less than pivot
    for (int i = start + 1; i <= end; i++)
        if (array[i] <= pivot)
            count++;

    //plcase pivot element on correct index
    int pivotIndex = start + count;
    swap(array[pivotIndex], array[start]);

    int i = start, j = end;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (array[i] <= pivot) //element shloud be less than pivot
            i++;
        while (array[j] > pivot) //element shloud be greater than pivot
            j--;
        //if element is not less than pivot and not greater than pivot then swap
        if (i < pivotIndex && j > pivotIndex)
            swap(array[i++], array[j--]);
    }
    return pivotIndex;
}

void quickSort(int *array, int start, int end)
{
    //base case
    if (start >= end)
        return;

    //partition of array
    int p = partition(array, start, end);

    //sort left part
    quickSort(array, start, p - 1);

    //sort right part
    quickSort(array, p + 1, end);
}

int main()
{
    int array[6] = {38, 27, 43, 9, 82, 10};
    int size = 6;
    quickSort(array, 0, size - 1);
    printArray(array, size);
    return 0;
}