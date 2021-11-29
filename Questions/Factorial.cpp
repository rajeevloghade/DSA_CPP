#include <iostream>
using namespace std;

int factorial(int number)
{
    int fact = 1;
    for (int i = 1; i <= number; i++)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    int number;
    cout << "Enter number: ";
    cin >> number;
    cout << "Factorial of " << number << " is : " << factorial(number) << endl;
    return 0;
}
