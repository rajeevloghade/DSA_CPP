#include <iostream>
using namespace std;

void sayDigits(int number, string *array)
{
    //base case
    if (number == 0)
        return;
    //processing
    int digit = number % 10;
    number /= 10;
    sayDigits(number, array);
    cout << array[digit] << " ";
}

int main()
{
    string array[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    int number;
    cin >> number;
    sayDigits(number, array);
    return 0;
}