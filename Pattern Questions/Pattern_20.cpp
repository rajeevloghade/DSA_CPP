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
        int star = n - i + 1;       
        int space = i - 1;
        while (space)
        {
            cout << " ";
            space--;
        }
        while (star)
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