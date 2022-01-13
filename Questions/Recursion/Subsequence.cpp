#include <iostream>
#include <vector>
using namespace std;

printVector(vector<string> str)
{
    cout<<"Subsequence : ";
    for (int i = 0; i < str.size(); i++)
        cout << "{" << str[i] << "} ";
    cout << endl;
}
void solve(string str, vector<string> &answer, string output, int index)
{
    //base case
    if (index >= str.length())
    {   //storing output before returning
        if (output.length() > 0) //if don't want empty string set
            answer.push_back(output);
        return;
    }

    //exclude
    solve(str, answer, output, index + 1);

    //include
    int element = str[index];
    output.push_back(element);

    solve(str, answer, output, index + 1);
}
vector<string> subsequence(string str)
{
    vector<string> answer;
    string output;
    int index = 0;

    solve(str, answer, output, index);
    return answer;
}

int main()
{
    string str = "abc";
    printVector(subsequence(str));
    return 0;
}