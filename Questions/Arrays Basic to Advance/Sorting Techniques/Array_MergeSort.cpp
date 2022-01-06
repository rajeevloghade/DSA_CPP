#include <iostream>
using namespace std;

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}
void merge(int *array, int start, int mid, int end)
{
    int len1 = mid - start + 1;
    int len2 = end - mid;

    //creating two array
    int *first = new int[len1];
    int *second = new int[len2];

    //copying values of first half array in first created array
    int mainArrayIndex = start;
    for (int i = 0; i < len1; i++)
        first[i] = array[mainArrayIndex++];

    //copying values of second half array in second created array
    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
        second[i] = array[mainArrayIndex++];

    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = start;

    // checking is first array's value is less than with second array's value
    while (index1 < len1 && index2 < len2)
        if (first[index1] < second[index2])
            array[mainArrayIndex++] = first[index1++];
        else
            array[mainArrayIndex++] = second[index2++];

    // checking is first array has any values left
    while (index1 < len1)
        array[mainArrayIndex++] = first[index1++];

    // checking is second array has any values left
    while (index2 < len2)
        array[mainArrayIndex++] = second[index2++];

    //lastly deleting the value after user
    delete[] first;
    delete[] second;
}
void mergeSort(int *array, int start, int end)
{
    //base case
    if (start >= end) //that means we have traversed the whole array
        return;

    //mid index
    int mid = start + (end - start) / 2;
    //sort left part
    mergeSort(array, start, mid);
    //sort right part
    mergeSort(array, mid + 1, end);

    //merging two sorted array
    merge(array, start, mid, end);
}

int main()
{

    int arr[7] = {38, 27, 43, 3, 9, 82, 10};
    int size = 7;
    mergeSort(arr, 0, size - 1);
    printArray(arr, size);
    return 0;
}

/**
 *  Time complexity : θ(nLogn)  
 *  Space complexity : θ(n)
 *  Algorithmic Paradigm: Divide and Conquer
 *  Variation : Inversion Count Problem
 */

