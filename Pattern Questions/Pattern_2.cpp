#include <iostream>
using namespace std;
int main()
{
    int n;
     cout<<"Enter n: ";
    cin >> n;
    int i = 1, j;

    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            cout << i <<" ";
            j++;
        }
        cout << endl;
        i++;
    }
} 
/**
    1 1 1 1
    2 2 2 2
    3 3 3 3
    4 4 4 4
 */ 