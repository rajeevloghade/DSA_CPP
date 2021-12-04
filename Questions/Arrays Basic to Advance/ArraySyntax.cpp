#include <iostream>
using namespace std;

void printArray(int array[], int size)
{
    cout << "Printing array : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }
}

int main()
{

    //declaration of array of size 5
    int array[5];                  // all has garbage value
    int arrayTwo[10] = {};         // all has 0 value
    int arrayThree[10] = {0};      // all has 0 value
    int arrayFour[10] = {1, 2, 3}; // 1,2 and rest has 0 as value
    // int arrayFive[10] = {[0-9] 2};

    printArray(array, 5);
    printArray(arrayTwo, 10);
    printArray(arrayThree, 10);
    printArray(arrayFour, 10);
    // cout << arrayFive << endl;
    return 0;
}