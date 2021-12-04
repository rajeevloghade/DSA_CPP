#include <iostream>
using namespace std;

int getMax(int array[], int size)
{
    int maximum = INT8_MIN;
    for (int i = 0; i < size; i++)
    {
        // if (array[i] > maximum)
        //     maximum = array[i];
        // Alternate solution : built-in
        maximum = max(maximum, array[i]);
    }
    return maximum;
}

int getMin(int array[], int size)
{
    int minimum = INT8_MAX;
    for (int i = 0; i < size; i++)
    {
        // if (array[i] < minimum)
        //     minimum = array[i];
        // Alternate solution : built-in
        minimum = min(minimum, array[i]);
    }
    return minimum;
}

int main()
{

    int array[10];
    cout << "Please enter 10 elements for array : " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> array[i];
    }
    cout << "Max value in array is : " << getMax(array, 10)
         << endl;
    cout << "Min value in array is : " << getMin(array, 10)
         << endl;

    return 0;
}