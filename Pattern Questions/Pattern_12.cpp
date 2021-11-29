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
            char ch = 'A' + j - 1;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}
/** 
    A B C D
    A B C D
    A B C D
    A B C D
 */