#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int i = 1, j;

    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            cout << j << " ";
            j++;
        }

        cout << endl;
        i++;
    }
}
/**
    1 2 3 4
    1 2 3 4
    1 2 3 4 
    1 2 3 4
 */