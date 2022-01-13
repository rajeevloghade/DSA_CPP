#include <iostream>
#include <vector>
using namespace std;

print2DVector(vector<vector<int>> array)
{
    for (int i = 0; i < array.size(); i++)
    {
        cout << "{";
        for (int j = 0; j < array[i].size(); j++)
            cout << array[i][j];
        cout << "} ";
        cout << endl;
    }
}

void solve(vector<int> array, vector<vector<int>> &answer, vector<int> output, int index)
{
    //base case
    if (index >= array.size())
    { //storing output before returning
        answer.push_back(output);
        return;
    }

    //exclude
    solve(array, answer, output, index + 1);

    //include
    int element = array[index];
    output.push_back(element);

    solve(array, answer, output, index + 1);
}
vector<vector<int>> subsets(vector<int> &array)
{
    vector<vector<int>> answer;
    vector<int> output;
    int index = 0;

    solve(array, answer, output, index);
    return answer;
}

int main()
{
    vector<int> array = {1, 2, 3};
    print2DVector(subsets(array));
    return 0;
}