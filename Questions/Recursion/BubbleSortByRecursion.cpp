#include <iostream>
using namespace std;

void printArray(int array[], int size)
{
    cout << "Bubble Sort : ";
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}
void bubbleSort(int *array, int size)
{
    //base case
    if (size == 0 || size == 1)
        return;

    //Processing
    for (int i = 0; i < size - 1; i++)
        if (array[i] > array[i + 1])
            swap(array[i], array[i + 1]);

    //Recursive call
    bubbleSort(array, size - 1);
}

int main()
{
    int array[6] = {10, 1, 7, 6, 14, 9};
    int size = 6;
    bubbleSort(array, size);
    printArray(array, size);
    return 0;
}