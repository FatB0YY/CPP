#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
using namespace std;

class Human {
public:
    int age = 0;
    string name;
    void Print() {
        cout << "Имя: " << name << ", " << "Возраст: " << age << endl;
        PrintPass();
    }

private:
    int password = 12345678;
    void PrintPass() {
        cout << password << endl;
    }
};

//пример инкапсюляции 

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
};

class CofeeGrinder {
public:
    void Start() {
        bool voltageIsNormal = CheckVoltage();
        if (voltageIsNormal) {
            cout << "VjuHHH !!!" << endl;
        }
        else {
            cout << "Beep Beep" << endl;
        }
    }
private:
    bool CheckVoltage() {
        return true;
    }
};

int main() {
    //руссикй язык
    setlocale(LC_ALL, "Russian");
    //чтобы числа рандома менялись
    //srand(time(NULL));

    //Human firstPerson;
    //firstPerson.age = 18;
    //firstPerson.name = "Rodion";

    //cout << firstPerson.name << endl;

    //Human secondHuman;
    //secondHuman.age = 16;
    //secondHuman.name = "Yana";

    //cout << secondHuman.name << endl;

    //secondHuman.Print();
    //firstPerson.Print();



    //Point a;
    //a.SetX(5);
    //int result = a.GetX();
    //a.SetY(4);

    //cout<< "result = "<< result << endl;


    CofeeGrinder Coffee;
    Coffee.Start();

    return 0;
}




