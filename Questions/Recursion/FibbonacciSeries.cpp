#include <iostream>
using namespace std;

int fibbonacci(int number)
{
    //base case
    if (number <= 1)
        return number;

    //recursive call
    return fibbonacci(number - 1) + fibbonacci(number - 2);
}

int countDistinctWays(int number)
{
    //base case
    if (number < 0)
        return 0;
    if (number == 0)
        return 1;
    //recursive call
    return countDistinctWays(number - 1) + countDistinctWays(number - 2);
}
int main()
{
    int number;
    cin >> number;
    cout << fibbonacci(number) << endl;
    cout << countDistinctWays(number) << endl;
    return 0;
}
/**
 * countDistinctWays : either 1 step or 2 steps
 **/