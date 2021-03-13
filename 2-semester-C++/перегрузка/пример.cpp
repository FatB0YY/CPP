#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
using namespace std;

int foo(int a, int b);
double foo(double a, double b);
int foo(int a, int b, int c);

int main() {
    //руссикй язык
    setlocale(LC_ALL, "Russian");
    //чтобы числа рандома менялись
    srand(time(NULL));



    int c = foo(1 + rand() % 10, 1 + rand() % 10);
    cout << c;

    return 0;
}

int foo(int a, int b) {
    cout << "Я функция int" << endl;
    return a + b;
}
double foo(double a, double b) {
    cout << "Я функция double" << endl;
    return a + b;
}
int foo(int a, int b, int c) {
    cout << "Я функция int with 3" << endl;
    return a + b + c;
}


