#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <conio.h>
#include <cmath>
#include <regex>
#include <sstream>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Russian");

    string str, word;
    cout << "String = ";
    getline(cin, str);

    int count = 0;
    stringstream words(str);
    while (words >> word)
    {
        if (word[0] == word[word.size() - 1])
        {
            count++;
        }
    }
    cout << "count = " << count;

    getch();
    return 0;
}