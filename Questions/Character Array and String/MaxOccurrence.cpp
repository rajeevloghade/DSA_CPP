#include <iostream>
using namespace std;

char getMaxOccurrence(string name)
{
    int arr[26] = {0};
    for (int i = 0; i < name.length(); i++)
    {
        char ch = name[i];
        int number = ch - 'a';
        arr[number]++;
    }

    int maximum = -1;
    int answer = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maximum < arr[i])
        {
            maximum = arr[i];
            answer = i;
        }
    }
    return answer + 'a';
}
int main()
{
    string name;
    cin >> name;
    cout << "Max occurrence of " << getMaxOccurrence(name) << " in " << name;
}