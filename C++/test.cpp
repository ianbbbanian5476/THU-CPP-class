#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string txt = "hello world";
    vector<string> words;
    stringstream ss(txt);
    string word;

    // Extract words from the stringstream
    while (ss >> word)
    {
        cout << word << endl;
        words.push_back(word);
    }

    // Print the words
    for (string w : words)
    {
        cout << w << endl;
    }

    return 0;
}
