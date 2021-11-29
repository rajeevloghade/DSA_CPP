#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int i = 1;

    while (i <= n)
    {
        int star = n - i + 1; //4-1+1 => 4
        while (star) //4,3,2,1,0 => 3,2,1,0 => 2,1,0 =>1,0 => 0
        {
            cout << "*";
            star--;
        }
        cout << endl;
        i++;
    }
}
/**
    ****
    ***
    **
    *
 */ 