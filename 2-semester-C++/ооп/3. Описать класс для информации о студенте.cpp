#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
using namespace std;

class Person {
private:
    string name = "";
    string surname = "";
    string middleName = "";
    int age = 0;
    string group = "";
    string institute = "";
    string direction = "";
public:
    // name
    void setName(string name) {
        this->name = name;
    }
    string getName() {
        return name;
    }
    // surname
    void setSurname(string surname) {
        this->surname = surname;
    }
    string getSurname() {
        return surname;
    }
    // middleName
    void setMiddleName(string middleName) {
        this->middleName = middleName;
    }
    string getMiddleName() {
        return middleName;
    }
    // age
    void setAge(int age) {
        this->age = age;
    }
    int getAge() {
        return age;
    }
    // group
    void setGroup(string group) {
        this->group = group;
    }
    string getGroup() {
        return group;
    }
    // institute
    void setInstitute(string institute) {
        this->institute = institute;
    }
    string getInstitute() {
        return institute;
    }
    // direction
    void setDirection(string direction) {
        this->direction = direction;
    }
    string getDirection() {
        return direction;
    }
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
    rodion.setName("rodion");
    rodion.setSurname("ramazanov");
    rodion.setMiddleName("mikhailovich");
    rodion.setAge(18);
    rodion.setGroup("09033");
    rodion.setInstitute("ИВМИИТ");
    rodion.setDirection("ФИИТ");
    rodion.print();

    return 0;
}




