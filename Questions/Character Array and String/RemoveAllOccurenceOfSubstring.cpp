#include <iostream>
#include <string>
using namespace std;

string removeAllOccurrence(string &name, string part)
{
    while (name.length() != 0 && name.find(part))
    {
        if (name.length())
            name.erase(name.find(part), part.length());
    }
    return name;
}

int main()
{
    string name;
    cin >> name;
    string part;
    cin >> part;
    removeAllOccurrence(name, part);
    cout << "After removal : " << name;
}