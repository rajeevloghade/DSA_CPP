#include <iostream>
using namespace std;

bool checkPellindrome(string name)
{
    int start = 0, end = name.length() - 1;
    while (start < end)
        if (name[start++] != name[end--])
            return 0;

    return 1;
}
bool isValidCharacter(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
        return 1;
    return 0;
}

bool validPellindrome(string name)
{
    string temp = "";
    for (int i = 0; i < name.length(); i++)
    {
        if (isValidCharacter(name[i]))
            temp.push_back(name[i]);
    }
    return checkPellindrome(temp);
}
int main()
{
    string name;
    cin >> name;
    if (validPellindrome(name))
        cout << name << " is valid pellindrome.";
    else
        cout << name << " is not valid pellindrome.";
}
/**
 * remove special symbol and then check for pellindrome
 **/