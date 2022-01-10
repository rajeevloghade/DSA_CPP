#include <iostream>
using namespace std;

int factorial(int number)
{
    //base case
    if (number == 1)
        return 1;

    //recursive call
    int big = factorial(number - 1);
    int small = number * big;
    return small;
}
int main()
{
    int number;
    cin >> number;
    cout << "Factorial of " << number << " : " << factorial(number) << endl;
    return 0;
}

/**
 * Recursion : A function calls itself.
 * Big/complex problem's solution depends on same type of small problem.
 * 
 * Ex : 2^4 -> 2*2*2*2*
 *      2^4 -> 2*2^3
 *      2^n -> 2*2^(n-1)
 *      f(n)-> f(n)*f(n-1)
 * 
 * Recursion Conditions : Base case (Mandantory*) with return statement
 *           : Recursive Relation (Recursive Call)
 * 
 * Recursion Tree (Tail): function(){
 *                          base case
 *                          processing
 *                          recusive call
 *                        }
 * 
 * Recursion Tree (Head): function(){
 *                          base case
 *                          processing
 *                          recusive call
 *                        }
 * 
 * Solve 1st case
 * Rest will recursion solve
 * Stop execution (Base case)
 **/