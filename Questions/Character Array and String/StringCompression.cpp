#include <iostream>
#include <vector>

using namespace std;

int stringCompress(vector<char> &chars)
{
    int i = 0, size = chars.size(), index = 0;

    while (i < size)
    {
        int j = i + 1;

        //matching and counting character
        while (j < size && chars[i] == chars[j])
            j++;

        //character storing to the same vector
        chars[index++] = chars[i];

        //count
        int count = j - i;

        //converting number to int and storing it in char array
        if (count > 1)
        {
            string countInString = to_string(count);
            for (char count : countInString)
                chars[index++] = count;
        }
        i = j;
    }

    return index;
}

int main()
{
    vector<char> chars = {'a', 'a', 'b', 'b', 'b', 'c', 'c', 'c', 'd'};
    cout << "Compression string index : " << stringCompress(chars);
    return 0;
}

/**
 * String Compression
 * i/p -> {'a', 'a', 'b', 'b', 'b', 'c', 'c', 'c', 'd'}
 * o/p -> {'a', '2', 'b', '3', 'c', '3', 'd'}
 * exception case if only one char is present simply print without count it as 'd' in i/p
 */