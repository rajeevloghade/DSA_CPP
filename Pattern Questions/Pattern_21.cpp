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
        int space=n-i; //4-1 => 4 | 4-2 => 2 | 4-3 => 1 | 4-4 => 0
        while (space)
        {
            cout<<" ";
            space--;
        }
        
        while (j <= i) 
        {
            cout << j;
            j++;
        }
        int start=i-1; //1-1 => 0 | 2-1 => 1 | 3-1 => 2 | 4-1 => 3 
        while (start)
        {
            cout<<start;
            start--;
        }
        cout << endl;
        i++;
    }
}
/**
       1
      121
     12321
    1234321
 */