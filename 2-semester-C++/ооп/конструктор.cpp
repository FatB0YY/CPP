#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
using namespace std;



//������ ������������ 

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
    }

public:
    Point(int valueX, int valueY) {
        x = valueX;
        y = valueY;
    }
};



int main() {
    //������� ����
    setlocale(LC_ALL, "Russian");
    //����� ����� ������� ��������
    //srand(time(NULL));


    Point a(5, 44);
    a.Print();
    Point b(1, 41);
    b.Print();


    return 0;
}




