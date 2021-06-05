#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

template<typename T1, typename T2>
class C {
private:
    T1 a;
    T2 b;
public:
    C() {
        a = 1;
        b = 1;
    }
    C(T1 a, T2 b) {
        this->a = a;
        this->b = b;
    }
    T1 P() {
        return (a * 2) + (b * 2);
    }
    T1 S() {
        return (a * b);
    }
    void Print() {
        cout << "P = " << P() << endl;
        cout << "S = " << S() << endl;
    }
};

int main() {
    //руссикй язык
    setlocale(LC_ALL, "Russian");

    C<int, int> X1(5, 5);
    X1.Print();
    cout << endl;
    C<double, double> X2(2.5, 2.5);
    X2.Print();
    cout << endl;
    C<int, int> X3;
    X3.Print();
    cout << endl;
    C<double, double> X4(6, 8.8);
    X4.Print();
    cout << endl;
    return 0;
}




