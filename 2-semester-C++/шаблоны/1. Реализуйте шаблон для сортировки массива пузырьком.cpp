#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
using namespace std;

template <typename T1, typename T2>
T2* bubbleSort(T1 n, T2* arr) {
    for (int i = 0; i < n - 1; i++)
    {
        bool isSwaped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                T2 temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isSwaped = true;
            }
        }
        if (!isSwaped)
            break;
    }

    cout << "Sort ������ : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " | ";
    }

    return arr;
}


int main() {
    //������� ����
    setlocale(LC_ALL, "Russian");
    //����� ����� ������� ��������
    srand(time(NULL));


    int n;
    cout << "������� ������ ������� = ";
    cin >> n;


    if (n >= 2) {
        double* arr = new double[n];
        cout << "�������� ������� ������ : " << endl;
        for (int i = 0; i < n; i++)
        {
            cout << "arr[" << i << "] = ";
            cin >> arr[i];
        }

        bubbleSort(n, arr);
        delete[] arr;
    }
    else {
        cout << "������ ������� ��������, (n >= 2)" << endl;
    }

    return 0;
}




