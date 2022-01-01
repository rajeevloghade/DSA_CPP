#include <iostream>
using namespace std;

int lengthOfString(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
        count++;
    return count;
}

void reverseOfString(char name[], int size)
{
    int start = 0, end = size - 1;
    while (start < end)
        swap(name[start++], name[end--]);
}

bool pellindromeOfString(char name[], int size)
{
    int start = 0, end = size - 1;
    while (start <= end)
        if (name[start++] != name[end--])
            return false;
    return true;
}

char toLowercase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        return ch;
    else
        return ch - 'A' + 'a'; // Ascii(char) - 65 + 98;
}
char toUppercase(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
        return ch;
    else
        return ch + 'A' - 'a'; // Ascii(char) + 65 - 98;
}

// int charToNum(char ch)
// {
//     if (ch <= '0' && ch >= '9')
//         return ch;
//     else
//         return ch - '0'; // Ascii(char) - 48;
// }
int main()
{
    char name[100];
    cin >> name; //cin execution stops (space,tab,enter)
    cout << "Name is : " << name << endl;

    // string fullName = "Rajeev Loghade";
    // cout << "FullName is : " << fullName << endl;

    int size = lengthOfString(name);
    cout << "Length of " << name << " : " << lengthOfString(name) << endl;
    cout << "Is " << name << " is Pellindrome : " << pellindromeOfString(name, size) << endl;
    char ch;
    cin >> ch;
    cout << "LowerCase of " << ch << " : " << toLowercase(ch) << endl;
    cout << "UpperCase of " << toLowercase(ch) << " : " << toUppercase(toLowercase(ch)) << endl;
    // cout << "UpperCase of " << ch << " : " << charToNum(ch) << endl;
    reverseOfString(name, size);
    cout << "Reverse of name : " << name << endl;

    return 0;
}