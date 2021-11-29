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
        char ch = 'A' + n - i; // 'A' + 4 -1 => D
        while (j <= i)
        {
            cout << ch++ << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}
/**
    D
    C D
    B C D
    A B C D
 */ 