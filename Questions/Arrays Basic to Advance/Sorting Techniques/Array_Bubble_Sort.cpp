#include <iostream>
using namespace std;

void swap(int &numOne, int &numTwo)
{
    int temp = numOne;
    numOne = numTwo;
    numTwo = temp;
}
void bubbleSort(int arr[], int size)
{
    // 1 to (n-1)
    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            //j=0 > j=1 -> swap
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
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
    bubbleSort(array, 5);
    cout << "Bubble Sorted Array :";
    printArray(array, 5);

    return 0;
}
/***
 * {7,9,1,2,3} => Sort it
 * {1,2,3,7,9} Answer
 * */