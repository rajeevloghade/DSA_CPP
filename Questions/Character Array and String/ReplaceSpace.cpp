#include <iostream>
using namespace std;

string replaceSpace(string &sentance)
{
    string temp = "";

    for (int i = 0; i < sentance.length(); i++)
    {
        if (sentance[i] == ' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
            temp.push_back(sentance[i]);
    }
    return temp;
}

int main()
{
    string sentance = "my name is rajeev.";
    cout << "Space replaced : " << replaceSpace(sentance);
}