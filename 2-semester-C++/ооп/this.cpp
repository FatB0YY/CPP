#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
using namespace std;


class Point {
private:
    int x;
    int y;

public:
    int GetX() {
        return x;
    }

    void SetX(int x) {
        this->x = x;
    }

    int GetY() {
        return y;
    }

    void SetY(int y) {
        this->y = y;
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

    Point(int x, int y) {
       this -> x = x;
        this -> y = y;
    }
};



int main() {
    //руссикй язык
    setlocale(LC_ALL, "Russian");
    //чтобы числа рандома менялись
    //srand(time(NULL));


    Point a(0, 5);
    a.Print();
    return 0;
}




