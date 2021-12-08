#include <iostream>
using namespace std;

bool isPossibleSolution(int arr[], int size, int target, int mid)
{
    int student = 1, pageSum = 0;
    for (int i = 0; i < size; i++)
    {
        if (pageSum + arr[i] <= mid)
            pageSum += arr[i];
        else
        {
            student++;
            if (student > target || arr[i] > mid)
                return false;
            pageSum = arr[i];
        }
    }
    return true;
}

int allocateBooks(int arr[], int n, int m) {
    int start = 0, answer = -1, sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    int end = sum;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (isPossibleSolution(arr, n, m, mid))
        {
            answer = mid;
            end = mid - 1;
        }
        else
            start = mid + 1;
        mid = start + (end - start) / 2;
    }
    return answer;
}
int main()
{
    int array[4] = {10, 20, 30, 40};
    cout << "Book Allocation answer is : " << allocateBooks(array, 4, 2) << endl;
    return 0;
}
/***
 * {10,20,30,40} 
 * Students (M) = 2
 * Books (N) = 4 
 * Answer is : 60
 * */