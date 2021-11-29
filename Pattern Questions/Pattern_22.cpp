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
        int startOne = n - i + 1; // 5-1+1 => 5
        while (j <= startOne)     //running j to 5
        {
            cout << j << " "; //print j
            j++;
        }
        int starOne = i - 1; //1-1 => 0 | 2-1 => 1 | 3-1 => 2 | 4-1 =>3 | 5-1 => 4 END
        while (starOne)
        {
            cout << "*" // print *
                 << " ";
            starOne--;
        }
        int starTwo = i - 1; //1-1 => 0 | 2-1 => 1 | 3-1 => 2 | 4-1 =>3 | 5-1 => 4 END
        while (starTwo)
        {
            cout << "*" // print *
                 << " ";
            starTwo--;
        }
        int startTwo = n - i + 1; // 5-1+1 => 5
        while (startTwo)          // 5,4,3,2,1,0
        {
            cout << startTwo << " "; //print startTwo
            startTwo--;
        }
        cout << endl;
        i++;
    }
}
/**
    1 2 3 4 5 5 4 3 2 1
    1 2 3 4 * * 4 3 2 1
    1 2 3 * * * * 3 2 1
    1 2 * * * * * * 2 1
    1 * * * * * * * * 1
 */