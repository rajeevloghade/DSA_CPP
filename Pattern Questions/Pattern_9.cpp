#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int i = 1, j;
    int count = 1;
    while (i <= n)
    {
        j = 1;
        while (j <= i)
        {
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}
/**
    1 
    2 3
    4 5 6
    7 8 9 10
 */