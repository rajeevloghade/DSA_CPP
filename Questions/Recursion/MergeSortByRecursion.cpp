#include <iostream>
using namespace std;

void printArray(int array[], int size)
{
    cout << "Merge Sort : ";
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}

void merge(int *array, int start, int end)
{
    //finding mid
    int mid = start + (end - start) / 2;

    //finding length of 1st half and 2nd half of array
    int len1 = mid - start + 1;
    int len2 = end - mid;

    //created two array with len1 and len2
    int *first = new int[len1];
    int *second = new int[len2];

    //copying both the halves of array in newly created array
    int mainIndexArray = start;
    for (int i = 0; i < len1; i++)
        first[i] = array[mainIndexArray++];
    mainIndexArray = mid + 1;
    for (int i = 0; i < len2; i++)
        second[i] = array[mainIndexArray++];

    //now comparing both the halves and storing them in main array (merge two sorted array)
    int index1 = 0;
    int index2 = 0;
    mainIndexArray = start;

    /**
     * at this point we have single element in both halves array 
     * and we are comparing them and storing in main array
     **/
    while (index1 < len1 && index2 < len2)
        if (first[index1] < second[index2])
            array[mainIndexArray++] = first[index1++];
        else
            array[mainIndexArray++] = second[index2++];

    //now we can have extra elemnts in 1st halves
    while (index1 < len1)
        array[mainIndexArray++] = first[index1++];
    //now we can have extra elemnts in 2nd halves
    while (index2 < len2)
        array[mainIndexArray++] = second[index2++];

    //deleting array after usage
    delete[] first;
    delete[] second;
}

void mergeSort(int *array, int start, int end)
{
    //base case
    if (start >= end)
        return;

    //finding mid
    int mid = start + (end - start) / 2;
    mergeSort(array, start, mid);   //sort left part
    mergeSort(array, mid + 1, end); //sort right part

    //merge two sorted array
    merge(array, start, end);
}

int main()
{
    int array[6] = {38, 27, 43, 9, 82, 10};
    int size = 6;
    mergeSort(array, 0, size - 1);
    printArray(array, size);
    return 0;
}