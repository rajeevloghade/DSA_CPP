#include <iostream>
using namespace std;

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
}
void rotateArray(int array[], int size, int rotateBy)
{
    int temp[size] = {};
    for (int i = 0; i < size; i++)
        temp[(i + rotateBy) % size] = array[i];

    cout << endl
         << "Array after rotating : ";
    printArray(temp, size);
}

int main()
{
    int array[5] = {3, 4, 5, 1, 2};
    rotateArray(array, 5, 3);
    return 0;
}