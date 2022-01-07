#include <iostream>
using namespace std;

void printArray(int array[], int size)
{
    cout<<"Quick Sort : ";
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}
int partition(int arr[], int start, int end)
{
    int pivot = arr[start];
    int count = 0;

    //counting of element less than pivot
    for (int i = start + 1; i <= end; i++)
        if (arr[i] <= pivot)
            count++;

    //placing pivot at right place
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);

    //now sort left and right part of pivot
    int i = start, j = end;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] <= pivot)
            i++;
        while (arr[j] > pivot)
            j--;

        if (i < pivotIndex && j > pivotIndex)
            swap(arr[i++], arr[j--]);
    }
    return pivotIndex;
}
void quickSort(int arr[], int start, int end)
{
    //base case
    if (start >= end) //that means we have traversed the whole array
        return;

    //partition
    int p = partition(arr, start, end);
    //recursive call of left part
    quickSort(arr, start, p - 1);
    //recursive call of left part
    quickSort(arr, p + 1, end);
}

int main()
{
    int arr[5] = {2, 4, 1, 6, 9};
    int size = 5;
    //Quick sort
    quickSort(arr, 0, size - 1);

    //printing array
    printArray(arr, size);
    return 0;
}
/**
 *  Time complexity : θ(nLogn)  
 *  Space complexity : θ(n)
 *  Avg case (T.C) : θ(nLogn)
 *  Worst case (T.C) : θ(nLogn)
 *  Best case (T.C) : θ(n2)
 */