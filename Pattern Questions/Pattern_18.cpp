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
        //For Space(" ")
        int space = n - i; //4-1=>3 space
        while (space)
        {
            cout << " ";
            space--;
        }
        //For Star(*)
        while (j <= i)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
}
/**
       * 
      **
     ***
    ****
 */