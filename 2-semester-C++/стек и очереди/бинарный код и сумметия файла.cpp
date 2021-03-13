#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
// stl
#include <vector>
#include <list>
#include <queue>
#include <stack>
using namespace std;

/*
#include <vector>
#include <list>
#include <queue>
#include <stack>
STL
vector list queue stack
algorithm
*/

// генерация бинарного кода целого положительного числа
string BinaryCode(int n);

// функция проверки симетричности файла
bool SimmetryFile(const char* file);


int main() {
    //руссикй язык
    setlocale(LC_ALL, "Russian");
    //чтобы числа рандома менялись
    srand(time(NULL));

    //queue<int> q;
    //for (int i = 0; i < 5; i++) {
    //    q.push(i);
    //}
    ////empty проверка на пустоту
    //while (!q.empty()) {
    //    cout << q.front() << " ";
    //    q.pop(); // удаляет
    //}
    //cout << endl;

    //stack<int> st;
    //for (int i = 0; i < 5; i++) {
    //    st.push(i);
    //}
    ////empty проверка на пустоту
    //while (!st.empty()) {
    //    cout << st.top() << " ";
    //    st.pop(); // удаляет
    //}
    //cout << endl;

    // перевод в 2 код, целого числа

    cout << BinaryCode(50) << endl;
    cout << BinaryCode(81) << endl;
    cout << BinaryCode(127) << endl;


    int arr1[] = { 1, 2, 3, 4, 4, 3, 2, 1 };
    ofstream f1("1.dat", ios::binary);
    f1.write((char*)arr1, sizeof(arr1));
    f1.close();

    int arr2[] = { 1, 2, 3, 4, 5, 4, 3, 2, 1 };
    ofstream f2("2.dat", ios::binary);
    f2.write((char*)arr2, sizeof(arr2));
    f2.close();

    int arr3[] = { 1, 2, 9, 4, 5, 4, 3, 2, 1 };
    ofstream f3("3.dat", ios::binary);
    f3.write((char*)arr3, sizeof(arr3));
    f3.close();

    cout << SimmetryFile("1.dat") << endl;
    cout << SimmetryFile("2.dat") << endl;
    cout << SimmetryFile("3.dat") << endl;


    return 0;
}

string BinaryCode(int n) {
    stack<int> st;
    while (n != 0) {
        st.push(n % 2);
        n /= 2;
    }
    string res = "";
    while (!st.empty()) {
        int k = st.top();
        st.pop();
        if (k == 0) {
            res = res + "0";
        }
        else {
            res = res + "1";
        }
    }
    return res;
}

bool SimmetryFile(const char* file) {
    ifstream f(file);
    f.seekg(0, ios::end);
    int n = (int)f.tellg() / sizeof(int); // колличество элементов
    f.seekg(0, ios::beg);// 0 относительно начала

    int a, b;
    queue<int> q;
    for (int i = 0; i < n / 2; i++) {
        f.read((char*)&a, sizeof(int));
        q.push(a);
    }
    if (n % 2 == 1) {
        f.seekg(sizeof(int), ios::cur); // относительно текущей позиции
    }
    stack<int> st;
    for (int i = 0; i < n / 2; i++) {
        f.read((char*)&a, sizeof(int));
        st.push(a);
    }
    f.close();

    for (int i = 0; i < n / 2; i++) {
        a = q.front();
        q.pop();

        b = st.top();
        st.pop();

        if (a != b) {
            return false;
        }
    }

    return true;
}



