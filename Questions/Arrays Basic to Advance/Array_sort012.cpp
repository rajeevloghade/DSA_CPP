#include <iostream>
using namespace std;

void sort012(int array[], int size)
{
    int left = 0, mid = 0, right = size - 1;
    while (mid <= right)
    {
        if (array[mid] == 0)
            swap(array[mid], array[left]), left++, mid++;
        else if (array[mid] == 1)
            mid++;
        else if (array[mid] == 2)
            swap(array[mid], array[right]), right--;
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
    int array[10] = {2, 0, 1, 2, 1, 2, 0, 1, 2, 1};

    sort012(array, 10);
    printArray(array, 10);
    return 0;
}