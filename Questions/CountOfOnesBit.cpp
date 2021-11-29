#include <iostream>
using namespace std;

int count1sBit(int number, int &ones)
{
    while (number != 0)
    {
        int lastBit = number & 1;
        if (lastBit == 1)
            ones++;
        number = number >> 1;
    }
    return ones;
}
int main()
{
    int ones = 0;
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    count1sBit(a, ones);
    count1sBit(b, ones);
    cout << "Count of bit 1 : " << ones << endl;

    return 0;
}
