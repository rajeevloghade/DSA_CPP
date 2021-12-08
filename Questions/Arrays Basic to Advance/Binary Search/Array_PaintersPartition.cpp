#include <iostream>
using namespace std;

bool isPossibleSolution(int boards[],int size, int k, int mid)
{
    int painterCount = 1;
    int boardSum = 0;

    for (int i = 0; i < size; i++)
    {
        if (boardSum + boards[i] <= mid)
            boardSum += boards[i];
        else
        {
            painterCount++;
            if (painterCount > k || boards[i] > mid)
                return false;
            boardSum = boards[i];
        }
    }
    return true;
}

int painterPartition(int boards[],int size, int k)
{
    int start = 0, sum = 0;
    for (int i = 0; i < size; i++)
        sum += boards[i];
    int end = sum;
    int answer = -1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (isPossibleSolution(boards, size, k, mid))
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
    int boards[4] = {5, 5, 5, 5};
    cout << "Painter's Patition answer is : " << painterPartition(boards, 4, 2) << endl;
    return 0;
}