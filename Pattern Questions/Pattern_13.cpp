#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int i = 1, j;
    char ch = 'A';
    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            cout << ch++ << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}
/** 
    A B C
    D E F
    G H I
 */