#include <iostream>
using namespace std;

int count1sBit(int number, int &ones)
{
    while (number != 0)
    {
        if (number & 1)
            ones++;
        number >>= 1;
    }
    return ones;
}
int main()
{
    int ones = 0;
    int a, b;
    cout << "Enter a: ";
    cin >> a; //2
    cout << "Enter b: ";
    cin >> b; //3

    count1sBit(a, ones);
    count1sBit(b, ones);
    cout << "Count of bit 1 : " << ones << endl; //3

    return 0;
}
