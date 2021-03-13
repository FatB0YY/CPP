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

    void pushDB(string filePath) {
        //запись
        ofstream out;
        out.open(filePath);

        if (!out.is_open()) throw "output";

        out << "name: " << name << "\n";
        out << "surname: " << surname << "\n";
        out << "middleName: " << middleName << "\n";
        out << "age: " << age << "\n";
        out << "group: " << group << "\n";
        out << "institute: " << institute << "\n";
        out << "direction: " << direction << "\n";

        out.close();
    }

    void takeDB(string filePath) {
        // получение
        ifstream in;
        in.open(filePath);
        if (!in.is_open()) throw "input";

        int sizeArr = 7;
        int k = 0;
        string buff;
        string* arr = new string[sizeArr];

        while (!in.eof()) {
            getline(in, buff);
            int size = buff.length();
            for (int i = 0; i < size; i++) {
                if (buff[i] == ':' && buff[i + 1] == ' ') {
                    arr[k].append(buff, i + 2, size - i + 2);
                    k++;
                }
            }
        }

        this->name = arr[0];
        this->surname = arr[1];
        this->middleName = arr[2];
        this->age = stoi(arr[3]);
        this->group = arr[4];
        this->institute = arr[5];
        this->direction = arr[6];

        delete[] arr;
        in.close();
    }
};


int main() {
    //руссикй язык
    setlocale(LC_ALL, "Russian");
    //чтобы числа рандома менялись
    srand(time(NULL));

    try {
        Person rodion;
        rodion.setName("Ivan");
        rodion.setSurname("Ivanov");
        rodion.setMiddleName("Ivanovich");
        rodion.setAge(7);
        rodion.setGroup("1547");
        rodion.setInstitute("ено");
        rodion.setDirection("шгдт");
        rodion.pushDB("test.txt");

        Person student;
        student.takeDB("test.txt");
        student.getName();
        student.getSurname();
        student.getMiddleName();
        student.getGroup();
        student.getInstitute();
        student.getDirection();

        student.print();

    }
    catch (const char* str) {
        cout << "ERROR: " << str << endl;
        cout << "файл не открылся" << endl;
        return -1;
    }
    return 0;
}




