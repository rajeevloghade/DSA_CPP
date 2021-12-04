#include <iostream>
using namespace std;

void printArray(int array[], int size)
{
    //changing the value of array
    //it will change the original array which is declared in main
    //because Array always works as pass by reference in function
    array[3] = 999;
    cout << "Printing array through function : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }
}

int main()
{

    //declaration of array of size 5
    int array[5] = {4, 12, 9, 0, -1}; // all has garbage value

    printArray(array, 5);

    cout << "Printing array in main : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << endl;
    }
    return 0;
}