#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
using namespace std;

int foo(int a, int b);
double foo(double a, double b);
int foo(int a, int b, int c);

int main() {
    //������� ����
    setlocale(LC_ALL, "Russian");
    //����� ����� ������� ��������
    srand(time(NULL));



    int c = foo(1 + rand() % 10, 1 + rand() % 10);
    cout << c;

    return 0;
}

int foo(int a, int b) {
    cout << "� ������� int" << endl;
    return a + b;
}
double foo(double a, double b) {
    cout << "� ������� double" << endl;
    return a + b;
}
int foo(int a, int b, int c) {
    cout << "� ������� int with 3" << endl;
    return a + b + c;
}


