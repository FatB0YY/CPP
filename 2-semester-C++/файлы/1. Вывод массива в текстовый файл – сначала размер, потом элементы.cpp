#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int n = rand() % 100;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }

    string filePath = "test.txt";
    ofstream out;
    out.open(filePath);
    out << n << endl;
    for (int i = 0; i < n; i++) {
        out << arr[i] << " ";
    }
    out.close();
    delete[] arr;
    return 0;
}