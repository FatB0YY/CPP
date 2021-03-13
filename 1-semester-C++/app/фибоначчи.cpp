#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <regex>
#include <string>
using namespace std;


int f(int n){
    setlocale(LC_ALL, "Russian");

    int a = 0;
    int b = 1;
    for (int i = 0; i < n; i++)
    {
        a = a + b;
        b = a - b;
    }
    return a;
}

int main(){
    setlocale(LC_ALL, "Russian");

    int n;
    cout << "Введите n = ";
    cin >> n;
    cout << f(n) << "\n";
    
    return 0;
}