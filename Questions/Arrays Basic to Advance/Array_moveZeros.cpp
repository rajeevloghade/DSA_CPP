#include <iostream>
using namespace std;

void moveZeros(int array[], int size)
{
    int i = 0;
    for (int j = 0; j < size; j++)
        if (array[j] != 0)
            swap(array[j], array[i]), i++;
}
void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
}
int main()
{
    int array[7] = {0, 1, 0, 3, 0, 12, 0};

    moveZeros(array, 7);
    cout << endl
         << "Array after moving zeros : ";
    printArray(array, 7);
    return 0;
}