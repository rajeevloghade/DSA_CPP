#include <iostream>
using namespace std;

void swapNumber(int numOne, int numTwo)
{
    int temp;
    temp = numOne;
    numOne = numTwo;
    numTwo = temp;
    cout<<"swapped"<<endl;
}
void swapAlternate(int array[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            //built-in
            // swap(array[i + 1], array[i]);
            //usercreated
            swapNumber(array[i + 1], array[i]);
        }
    }
}
void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}
int main()
{
    int even[10] = {2, 4, 6, 8, 9, 0, -1, 5, -7, -5};
    int odd[7] = {32, 74, 69, 85, 96, 80, -1};

    swapAlternate(even, 10);
    swapAlternate(odd, 7);
    printArray(even, 10);
    printArray(odd, 7);
    return 0;
}