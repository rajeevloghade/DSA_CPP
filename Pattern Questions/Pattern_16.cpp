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
        while (j <= i)
        {
            char ch = 'A' + i + j -2;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}
/**
    A
    B C
    C D E
    D E F G
 */ 