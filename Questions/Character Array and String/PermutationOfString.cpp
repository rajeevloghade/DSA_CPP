#include <iostream>
using namespace std;

bool checkEqual(int countOne[26], int countTwo[26])
{
    for (int i = 0; i < 26; i++)
        if (countOne[i] != countTwo[i])
            return 0;
    return 1;
}

bool checkInclusion(string stringOne, string stringTwo)
{
    //store character count1
    int countOne[26] = {0};
    for (int i = 0; i < stringOne.length(); i++)
        countOne[stringOne[i] - 'a']++;

    //traverse stringTwo of windowSize of stringOne length and compare
    int countTwo[26] = {0};
    int i = 0, windowSize = stringOne.length();

    //traverse first window
    while (i < windowSize && i < stringTwo.length())
    {
        countTwo[stringTwo[i] - 'a']++;
        i++;
    }
    // checking both the counts are equal or not
    if (checkEqual(countOne, countTwo))
        return 1;

    while (i < stringTwo.length())
    {
        //adding new char
        char newChar = stringTwo[i];
        countTwo[newChar - 'a']++;

        //removing old char
        char oldChar = stringTwo[i - windowSize];
        countTwo[oldChar - 'a']--;

        i++;
        // checking both the counts are equal or not
        if (checkEqual(countOne, countTwo))
            return 1;
    }
    return 0;
}

int main()
{
    string stringOne = "ab";
    string stringTwo = "eidba000";

    if (checkInclusion(stringOne, stringTwo))
        cout << "Permutation True";
    else
        cout << "Permutation False";
}
/**
 * StringOne = ab;  -> ab,ba (permutations)
 * StringTwo = eidba000; ba is present(continuosly) in StringTwo return true else false
 **/