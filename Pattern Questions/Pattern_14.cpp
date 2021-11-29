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
            char ch = 'A' + i + j - 2; // 'A' + 1 + 1 - 2 => 'A' 
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}
/** 
    A B C D
    B C D E
    C D E F
    D E F G
 */