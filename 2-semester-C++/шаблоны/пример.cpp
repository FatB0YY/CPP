#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
using namespace std;

// T1 �������� �������� ���� ����, ������� �� ����� ���������
// ��� ��� ���� ���� ��� ������
//template <typename T1>
//T1 foo(T1 a, T1 b) {
//    return a + b;
//}

template <typename T1, typename T2>
// ����� ����� ������� �� ���, ��� ����� �������
T1 foo(T1 a, T2 b) {
    return a + b;
}

int main() {
    //������� ����
    setlocale(LC_ALL, "Russian");
    //����� ����� ������� ��������
    srand(time(NULL));


    //int c = foo(2.5, 2.5);
    //cout << c << endl;

    double c = foo(2.5, 2);
    cout << c << endl;


    return 0;
}




