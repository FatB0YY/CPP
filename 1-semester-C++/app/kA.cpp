#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
#include <string>
#include <stdio.h>
#include <regex>
using namespace std;

string lengthMaxA(string s) {
    int i = 0, max = 0, maxA = 0, max_i = 0;
    string s2;
    while (s[i] != '\0') {

        while (s[i] == ' ')
            i++;

        int word = 0, wordA = 0;

        while (s[i] != ' ' && s[i] != '\0') {
            word++;
            i++;
            if (s[i] == 'a' || s[i] == 'A')
                wordA++;
        }
        if (wordA > 0 && wordA > maxA) {
            max = word;
            maxA = wordA;
            max_i = i - word;
        }
    }
    for (int i = 0; i < max; i++) {
        s2 += s[max_i + i];
    }
        

        cout << "Строка макс А = ";
        return s2;


}

int kMaxA(string s){
    int i = 0, max = 0, maxA = 0, max_i = 0;
    while (s[i] != '\0') {

        while (s[i] == ' ')
            i++;

        int word = 0, wordA = 0;

        while (s[i] != ' ' && s[i] != '\0') {
            word++;
            i++;
            if (s[i] == 'a' || s[i] == 'A')
                wordA++;
        }
        if (wordA > 0 && wordA > maxA) {
            max = word;
            maxA = wordA;
            max_i = i - word;
        }
    }


        return max;


}

int main() {
    setlocale(LC_CTYPE, "Russian");


    string str;
    cout << "Введите строку = ";
    getline(cin, str);

 
    cout << lengthMaxA(str);
    cout << endl;
    cout << kMaxA(str);

    return 0;
}
