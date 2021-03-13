#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
using namespace std;


class MyClass {
private:
    int* data;
public:
    MyClass(int size) {
        data = new int[size];
        cout << "Размер = " << size << endl;
        for (int i = 0; i < size; i++) {
            data[i] = 1 + rand() % 9;
        }

        for (int i = 0; i < size; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
    ~MyClass() {
        cout << "Освободили память !" << endl;
        delete[] data;
    }
};



int main() {
    //руссикй язык
    setlocale(LC_ALL, "Russian");
    //чтобы числа рандома менялись
    srand(time(NULL));


    MyClass a(4);
    MyClass b(5);
    MyClass c(6);


    return 0;
}




