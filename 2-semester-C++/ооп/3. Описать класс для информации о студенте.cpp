#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
using namespace std;

class Person {
public:
    string name = "";
    string surname = "";
    string middleName = "";
    int age = 0;
    string group = "";
    string institute = "";
    string direction = "";

    void print() {
        cout << "name: " << name << endl;
        cout << "surname: " << surname << endl;
        cout << "middleName: " << middleName << endl;
        cout << "age: " << age << endl;
        cout << "group: " << group << endl;
        cout << "institute: " << institute << endl;
        cout << "direction: " << direction << endl;
    }
};


int main() {
    //руссикй язык
    setlocale(LC_ALL, "Russian");
    //чтобы числа рандома менялись
    srand(time(NULL));


    Person rodion;
    rodion.name = "rodion"''
    rodion.surname = "ramazanov"''
    rodion.middleName = "mikhailovich"''
    rodion.age = 18'
    rodion.group = "09033"''
    rodion.institute = "ИВМИИТ"''
    rodion.direction = "ФИИТ";
    rodion.print();

    return 0;
}




