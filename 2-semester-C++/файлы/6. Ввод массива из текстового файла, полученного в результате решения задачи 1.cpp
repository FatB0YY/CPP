#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
using namespace std;

int main() {
    //руссикй язык
    setlocale(LC_ALL, "Russian");
    //чтобы числа рандома менялись
    srand(time(NULL));

    string path = "test.txt";
    ifstream fin;
    fin.open(path);

    if (!fin.is_open()) {
        cout << "error" << endl;
        return -1;
    }
    else {
        cout << "файл открыт" << endl;

        //char ch;
        //while (fin.get(ch)) {
        //    cout << ch;
        //}

        //string str;
        //while (!fin.eof()) {
        //    str = "";
        //    getline(fin, str);
        //    cout << str << endl;
        //}

        int n;
        fin >> n;
        int* arr = new int[n];

        for (int i = 0; i < n; i++) {
            fin >> arr[i];
        }

        cout << "n = " << n << endl;
        cout << "массив: " << endl;
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }

        fin.close();
        delete[] arr;
    }
    return 0;
}


