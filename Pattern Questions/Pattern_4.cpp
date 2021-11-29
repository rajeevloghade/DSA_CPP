#include <iostream>
using namespace std;
int main()
{
    int n;
     cout<<"Enter n: ";
    cin >> n;
    int i = 1, j;

    while (i < n)
    {
        j=1;
       while (j<=n)
       {
           cout<< n-j+1 <<" ";
           j++;
       }
       
        cout << endl;
        i++;
    }
}
/**
    4 3 2 1 
    4 3 2 1
    4 3 2 1
 */