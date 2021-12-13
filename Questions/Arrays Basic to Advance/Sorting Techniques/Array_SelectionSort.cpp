#include <iostream>
using namespace std;

void swap(int &numOne, int &numTwo)
{
    int temp = numOne;
    numOne = numTwo;
    numTwo = temp;
} 
void selectionSort(int arr[], int size)
{
    int minIndex = 0;
    for (int i = 0; i < size - 1; i++)
    {
        minIndex = i;
        for (int j = i + 1; j < size; j++)
            if (arr[minIndex] > arr[j])
                minIndex = j;
        swap(arr[minIndex], arr[i]);
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
    selectionSort(array, 5);
    cout << "Sorted Array :";
    printArray(array, 5);

    return 0;
}
/***
 * {7,9,1,2,3} => Sort it
 * {1,2,3,7,9} Answer
 * */