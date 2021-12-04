#include <iostream>
using namespace std;

void reverseArray(int array[], int size)
{
    int start = 0, end = size - 1;
    while (start <= end)
    {
        swap(array[start], array[end]);
        start++;
        end--;
    }
}
void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}
int main()
{
    int array[10] = {2, 4, 6, 8, 9, 0, -1, 5, -7, -5};

    cout << "Array before reverse : ";
    printArray(array, 10);
    reverseArray(array, 10);
    cout << endl
         << "Array after reverse : ";
    printArray(array, 10);
    return 0;
}