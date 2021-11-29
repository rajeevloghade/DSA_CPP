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
            char ch = 'A' + i - 1;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}
/** 
    A A A A
    B B B B
    C C C C
    D D D D
 */