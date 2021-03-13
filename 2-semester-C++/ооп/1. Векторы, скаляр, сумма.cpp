#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
using namespace std;

class MyClass {
private:
    int size; // размер вектора
    int* arr; // массив для вектора
public:
    MyClass(int size = 0);
    ~MyClass();
    void writeRandom();
    void sum(const MyClass& v1, const MyClass& v2);
    void scalar(int scalar, const MyClass& v);
    void print();
};

MyClass::MyClass(int size) {
    if (size < 0)
        throw 1;
    if (size > 0) {
        srand(time(NULL));
        this->size = size;

        this->arr = new int[this->size];
    }
}

MyClass::~MyClass() { // деструктор, очишение памяти, будет вызван 4 раза
    if (size > 0) {
        delete[] arr;
    } 
}

void MyClass::writeRandom() { // заполняем массивы рандомными числами
    for (int i = 0; i < size; i++)
        arr[i] = rand() % 100;
}

void MyClass::sum(const MyClass& v1, const MyClass& v2) { // сумма векторов
    if (v1.size != v2.size)
        throw 2;
    for (int i = 0; i < size; i++)
        arr[i] =  v1.arr[i] + v2.arr[i];
}

void MyClass::scalar(int scal, const MyClass& v) { // умножение вектора на скаляр
    for (int i = 0; i < size; i++)
        arr[i] = v.arr[i] * scal;
}

void MyClass::print() { // это вывод массива, к которому мы применим метод
    for (int i = 0; i < size; i++) {
        if (i == 0)
            cout « "{" « arr[i] « ", ";
        else if (i == size - 1)
            cout « arr[i] « "}";
        else
            cout « arr[i] « ", ";
    }
    cout « endl;
}

int main() {
    //руссикй язык
    setlocale(LC_ALL, "Russian");
    //чтобы числа рандома менялись
    srand(time(NULL));

    int size = 3;
    int scal = 1 + rand() % 5;

    try {
        MyClass vector1(size);
        MyClass vector2(size);

        MyClass arrSum(size);
        MyClass arrScal(size);

        vector1.writeRandom();
        vector2.writeRandom();
        cout « "1 вектор = ";
        vector1.print();

        cout « endl « "2 вектор = ";
        vector2.print();

        cout « endl « "1 вектор + 2 вектор = ";
        arrSum.sum(vector1, vector2);
        arrSum.print();

        cout « endl « scal « " * 1 вектор = ";
        arrScal.scalar(scal, vector1);
        arrScal.print();
    }
    catch (int i) {
        cout « "ERROR: " « i;
    }

    return 0;
}