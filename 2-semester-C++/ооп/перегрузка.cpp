#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
using namespace std;



//пример инкапсюл€ции 

class Point {
protected:
    int c = 0;
private:
    int x;
    int y;

public:
    int GetX() {
        return x;
    }

    void SetX(int valueX) {
        x = valueX;
    }

    int GetY() {
        return y;
    }

    void SetY(int valueY) {
        y = valueY;
    }

    void Print() {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
        cout << "----------" << endl;
    }

public:
    Point() {
        x = 0;
        y = 0;
    }

    Point(int valueX, int valueY) {
        x = valueX;
        y = valueY;
    }

    Point(int valueX, bool boolean) {
        x = valueX;
        boolean ? y = 1 : y = 0;
    }
};



int main() {
    //руссикй €зык
    setlocale(LC_ALL, "Russian");
    //чтобы числа рандома мен€лись
    //srand(time(NULL));


    Point a(5, 44);
    a.Print();
    Point b;
    b.Print();
    Point c(5, true);
    c.Print();


    return 0;
}




