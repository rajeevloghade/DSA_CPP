#include <iostream>
using namespace std;

int power(int a, int b)
{
    //base case
    if (b == 0)
        return 1;
    if (b == 1)
        return a;

    int answer = power(a, b / 2);
    //recursive call
    if (b & 1) //ODD CASE
        return a * answer * answer;
    else
        return answer * answer;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << a << " to the power " << b << " is : " << power(a, b);
    return 0;
}