#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
using namespace std;

// T1 условное название того типа, которое мы будем принимать
// вот так если один тип данных
//template <typename T1>
//T1 foo(T1 a, T1 b) {
//    return a + b;
//}

template <typename T1, typename T2>
// очень важно следить за тем, что хотим вернуть
T1 foo(T1 a, T2 b) {
    return a + b;
}

int main() {
    //руссикй язык
    setlocale(LC_ALL, "Russian");
    //чтобы числа рандома менялись
    srand(time(NULL));


    //int c = foo(2.5, 2.5);
    //cout << c << endl;

    double c = foo(2.5, 2);
    cout << c << endl;


    return 0;
}




