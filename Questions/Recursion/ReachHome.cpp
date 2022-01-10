#include <iostream>
using namespace std;

bool reachHome(int source, int desctination)
{
    //base case
    if (source == desctination)
        return true;
    //recursive call
    return reachHome(++source, desctination);
}
int main()
{
    int source = 0;
    int desctination = 10;

    if (reachHome(source, desctination))
        cout << "Reached Home." << endl;
    else
        cout << "Not Reached Home." << endl;
    return 0;
}