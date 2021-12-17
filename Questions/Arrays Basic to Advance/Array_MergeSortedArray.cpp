#include <iostream>
using namespace std;

void mergeSortedArray(int arr[], int n, int arrtwo[], int m, int arrThree[])
{
    int i = 0, j = 0, k = 0;

    while (i < n && j < m){
        if (arr[i] < arrtwo[j])
            arrThree[k++] = arr[i++]; 
        else 
            arrThree[k++] = arrtwo[j++];
    }

    while (i < n)
        arrThree[k++] = arr[i++];

    while (j < m)
        arrThree[k++] = arrtwo[j++];
}
void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
}
int main()
{
    int array[5] = {1, 3, 5, 7, 9};
    int arrayTwo[4] = {2, 4, 6, 8};
    int arrThree[9] = {0};

    mergeSortedArray(array, 5, arrayTwo, 4, arrThree);
    cout << endl
         << "Array after merging : ";
    printArray(arrThree, 9);
    return 0;
}