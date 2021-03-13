#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cmath>
#include <regex>
#include <sstream>
#include <fstream>
using namespace std;


void up(string filePath) { // 1 ������
    int n;
    cout << "������� ������ ������� n = ";
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

    ofstream out;       //�������� ��� �� ��������
    out.open(filePath, ios_base::app); // append (���������), ��������� � ����� �����

    if (F)
    {
        cout << "YES";
        out << "������ 1: " << "YES" << "\n";
    }
    else
    {

        cout << "NO";
        out << "������ 1: " << "NO" << "\n";
    }

    out.close(); // ��������� ����
    delete[] arr;
}

void SDVIG(string filePath) { //2 ������

    cout << "������� ������ ������� n = ";
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

    ofstream out;       //�������� ��� �� ��������
    out.open(filePath, ios_base::app); // append (���������), ��������� � ����� �����
    for (int i = 0; i < n; i++)
    {
        out << "2 ������ " << arr[i];
    }
    out.close(); // ��������� ����


    delete[] arr;
}

void foo(int* arr, int n, string filePath) { // 3 ������
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
    cout << "������������� = " << kplus << endl;
    cout << "����� = " << kminus << endl;

    ofstream out;       //�������� ��� �� ��������
    out.open(filePath, ios_base::app); // append (���������), ��������� � ����� �����
    out << "3 ������:\n";
    out << "������������� = " << kplus << "\n";
    out << "����� = " << kminus << "\n";
    out.close(); // ��������� ����
}

int indexMax(int* arr, int n, string filePath) { // 4 ������
    int max = arr[0];
    int imax = 0;
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            imax = i;
        }
    }


    ofstream out;       //�������� ��� �� ��������
    out.open(filePath, ios_base::app); // append (���������), ��������� � ����� �����
    out << "4 ������:\n";
    out << "imax  = " << imax << "\n";
    out.close(); // ��������� ����


    return imax;

}



int main()
{
    setlocale(LC_ALL, "Russian");
    // ���������� � ����

    string filePath = "C://app-cpp/file.txt";

    //up(filePath); // 1
    //SDVIG(filePath); // 2

    cout << "������� ������ ������� n = ";
    int n; cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //foo(arr, n, filePath); // 3

    cout << "imax = " << indexMax(arr, n, filePath); // 4

    delete[] arr; // ��� !!! 4 � 3� ����� �������




    return 0;
}