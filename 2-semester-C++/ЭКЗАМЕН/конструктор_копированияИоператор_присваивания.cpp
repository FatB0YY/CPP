#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class MyClass {
public:
    int* data;

    MyClass(int size) {
        this->Size = size;
        this->data = new int[size];
        for (int i = 0; i < size; i++) {
            data[i] = i;
        }
        cout << "конструктор вызвался " << this << endl;
    }
    ~MyClass() {
        cout << "деструктор вызвался " << this << endl;
        delete[] data;
    }
    MyClass(const MyClass& other) {
        cout << "конструктор копирования вызвался " << this << endl;
        /*by default: this->data = other.data;*/

        this->Size = other.Size;
        this->data = new int[other.Size];
        for (int i = 0; i < other.Size; i++) {
            this->data[i] = other.data[i];
        }
    }
    MyClass& operator = (const MyClass& other) {
        cout << "оператор= вызвался " << this << endl;
        this->Size = other.Size;
        if (this->data != nullptr) {
            delete[] this->data;
        }
        this->data = new int[other.Size];
        for (int i = 0; i < other.Size; i++) {
            this->data[i] = other.data[i];
        }
        return *this;
    }
private:
    int Size;
};

void foo(MyClass value) {
    cout << "функция foo" << endl;
}

MyClass Foo2() {
    MyClass temp(2);
    cout << "функция foo2" << endl;

    return temp;
}



int main() {
    //руссикй язык
    setlocale(LC_ALL, "Russian");
    MyClass a(1);
    MyClass b(a);

    a.operator=(b);
    return 0;
}




