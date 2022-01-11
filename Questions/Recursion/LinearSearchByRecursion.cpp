#include <iostream>
using namespace std;

bool linearSearch(int array[], int size, int target)
{
    //base case
    if (size == 0)
        return false;

    if (array[0] == target)
        return true;
    else
        return linearSearch(array + 1, size - 1, target); //recursive call
}

int main()
{
    int array[6] = {2, 4, 7, 9, 11, 14};
    int size = 6;
    cout << "Please enter target : ";
    int target;
    cin >> target;
    if (linearSearch(array, size, target))
        cout << target << " Found" << endl;
    else
        cout << target << " NOT Found" << endl;
    return 0;
}