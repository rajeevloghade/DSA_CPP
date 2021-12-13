#include <iostream>
using namespace std;

void swap(int &numOne, int &numTwo)
{
    int temp = numOne;
    numOne = numTwo;
    numTwo = temp;
}
void insertionSort(int arr[], int size)
{
    //1 to (n-1)
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
            if (arr[j] > temp)
                arr[j + 1] = arr[j];
            else
                break;
        arr[j + 1] = temp;
    }
}
void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
}
int main()
{
    int array[5] = {7, 9, 1, 2, 3};
    insertionSort(array, 5);
    cout << "Insertion Sorted Array :";
    printArray(array, 5);

    return 0;
}
/***
 * {7,9,1,2,3} => Sort it
 * {1,2,3,7,9} Answer
 * */