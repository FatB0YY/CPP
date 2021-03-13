#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cmath>
#include <regex>
#include <sstream>
#include <fstream>
using namespace std;


void up(string filePath) { // 1 задача
    int n;
    cout << "Введите размер массива n = ";
    cin >> n;
    int* arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool F = true;


    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            F = false;
            break;
        }
    }

    ofstream out;       //пытаемся что то записать
    out.open(filePath, ios_base::app); // append (добавлять), добавляем в конец файла

    if (F)
    {
        cout << "YES";
        out << "Задача 1: " << "YES" << "\n";
    }
    else
    {

        cout << "NO";
        out << "Задача 1: " << "NO" << "\n";
    }

    out.close(); // закрываем файл
    delete[] arr;
}

void SDVIG(string filePath) { //2 задача

    cout << "Введите размер массива n = ";
    int n; cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int tmp = arr[n - 1];
    for (int i = n - 1; i >= 0; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[0] = tmp;

    cout << "Array after the shift:" << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    ofstream out;       //пытаемся что то записать
    out.open(filePath, ios_base::app); // append (добавлять), добавляем в конец файла
    for (int i = 0; i < n; i++)
    {
        out << "2 Задача " << arr[i];
    }
    out.close(); // закрываем файл


    delete[] arr;
}

void foo(int* arr, int n, string filePath) { // 3 задача
    int kplus = 0;
    int kminus = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            ++kplus;
        }
        else if (arr[i] < 0) {
            ++kminus;
        }
    }
    cout << "Положительных = " << kplus << endl;
    cout << "Отриц = " << kminus << endl;

    ofstream out;       //пытаемся что то записать
    out.open(filePath, ios_base::app); // append (добавлять), добавляем в конец файла
    out << "3 Задача:\n";
    out << "Положительных = " << kplus << "\n";
    out << "Отриц = " << kminus << "\n";
    out.close(); // закрываем файл
}

int indexMax(int* arr, int n, string filePath) { // 4 задача
    int max = arr[0];
    int imax = 0;
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            imax = i;
        }
    }


    ofstream out;       //пытаемся что то записать
    out.open(filePath, ios_base::app); // append (добавлять), добавляем в конец файла
    out << "4 Задача:\n";
    out << "imax  = " << imax << "\n";
    out.close(); // закрываем файл


    return imax;

}



int main()
{
    setlocale(LC_ALL, "Russian");
    // записываем в файл

    string filePath = "C://app-cpp/file.txt";

    //up(filePath); // 1
    //SDVIG(filePath); // 2

    cout << "Введите размер массива n = ";
    int n; cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //foo(arr, n, filePath); // 3

    cout << "imax = " << indexMax(arr, n, filePath); // 4

    delete[] arr; // для !!! 4 и 3Б иначе удалить




    return 0;
}