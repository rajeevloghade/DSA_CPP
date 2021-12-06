#include <iostream>
using namespace std;

void sort01(int array[], int size)
{
    int left = 0, rigth = size - 1;
    while (left < rigth)
    {
        while (array[left] == 0 && left < rigth)
        {
            left++;
        }
        while (array[rigth] == 1 && left < rigth)
        {
            rigth--;
        }
        
        while ((array[left] == 1 && array[rigth] == 0)  && left < rigth)
        {
            swap(array[left], array[rigth]);
            left++;
            rigth--;
        }
        while((array[left] == 2 && array[rigth] == 1) && left < rigth){
            swap(array[left], array[rigth]);
            left++;
            rigth--;
        }
    }
}
void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}
int main()
{
    int array[10] = {2,0,1,2,1,2,0,1,2,1};

    sort01(array, 10);
    printArray(array, 10);
    return 0;
}