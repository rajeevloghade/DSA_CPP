#include <iostream>
using namespace std;

bool pellindrome(string name, int start, int end)
{
    //base case
    if (start > end)
        return true;

    if (name[start] != name[end])
        return false;
    else
        return pellindrome(name, start + 1, end - 1);
}
void reverse(string &name, int start, int end)
{
    //base case
    if (start > end)
        return;

    swap(name[start++], name[end--]);

    reverse(name, start, end);
}
int main()
{
    string name;
    cout << "Enter name : ";
    cin >> name;
    //Pellindrome String
    if (pellindrome(name, 0, name.length() - 1))
        cout << "Pellindrome String : " << name << endl;
    else
        cout << "NOT Pellindrome String : " << name << endl;
    //Reverse String
    reverse(name, 0, name.length() - 1);
    cout << "Reverse name : " << name << endl;
    return 0;
}