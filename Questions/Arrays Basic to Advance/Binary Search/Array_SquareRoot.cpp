#include <iostream>
using namespace std;

int findSquareRoot(int number)
{
    long long int start = 0, end = number;
    long long int mid = start + (end - start) / 2;
    long long int answer = -1;
    while (start < end)
    {
        long long int square = mid * mid;
        if (square == number)
            return mid;
        else if (square < number)
        {
            answer = mid;
            start = mid + 1;
        }
        else
            end = mid;
        mid = start + (end - start) / 2;
    }
    return answer;
}

int main()
{
    int number;
    cout << "Enter number : ";
    cin >> number;

    cout << "SquareRoot of " << number << " is : " << findSquareRoot(number) << endl;
    return 0;
}