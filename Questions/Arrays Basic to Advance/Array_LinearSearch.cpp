#include <iostream>
using namespace std;

int linearSearch(int array[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == key)
            return 1;
    }
    return 0;
}
int main()
{
    int array[10] = {2, 4, 6, 8, 9, 0, -1, 5, -7, -5};
    int key;
    cout << "Please enter element to search : " << endl;
    cin >> key;
    bool found = linearSearch(array, 10, key);
    if (found)
        cout << "Array contains " << key << endl;
    else
        cout << "Array doesn't contains " << key << endl;
    return 0;
}