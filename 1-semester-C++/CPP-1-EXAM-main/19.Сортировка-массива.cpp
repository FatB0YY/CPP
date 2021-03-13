#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <conio.h>
#include <cmath>
#include <regex>
#include <sstream>
using namespace std;

void bubbleSort(int n)
{
    int *arr = new int[n];
    cout << "Начинаем вводить массив : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = n - 1; i > -1; i--)
    {
        bool isSwaped = false;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isSwaped = true;
            }
        }
        if (!isSwaped)
            break;
    }
    cout << "Sort массив : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    delete[] arr;
}

void CountingSort(int n)
{

    int *arr = new int[n];
    cout << "Начинаем вводить массив : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int *c = new int[6]{0, 0, 0, 0, 0}; // не совсем понимаю, как изменить эту строчку, чтобы работало с динамическим массивом
    // но для  1, 2, 5, 0, 4 подходит
    // типа можно найти max эл среди них и подсчитать кол [0 до max].да, а с 0 что делать ?, которые в массиве
    for (int i = 0; i < n; i++)
    {
        int value = arr[i];
        c[value]++;
    }

    int k = 0;
    for (int i = 0; i < 6; i++)
        for (int j = 0; j < c[i]; j++)
        {
            arr[k] = i;
            k++;
        }
    cout << "Sort массив : ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << ' ';

    delete[] arr;
    delete[] c;
}

void Merge(int arr[], int l, int m, int r, int size)

{
    int *c = new int[size];
    int i = l, j = m + 1, k = l;
    while (i <= m && j <= r)
        if (arr[i] < arr[j])
        {
            c[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            c[k] = arr[j];
            j++;
            k++;
        }
    while (i <= m)
    {
        c[k] = arr[i];
        i++;
        k++;
    }
    while (j <= r)
    {
        c[k] = arr[j];
        j++;
        k++;
    }
    for (int i = l; i <= r; i++)
        arr[i] = c[i];
}

void msort(int *arr, int l, int r, int size)
{
    if (l >= r)
        return;
    int m = (l + r) / 2;
    msort(arr, l, m, size);
    msort(arr, m + 1, r, size);
    Merge(arr, l, m, r, size);
}

void Choice(int n)
{

    int *arr = new int[n];
    cout << "Начинаем вводить массив : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int j = 0; j < n - 1; j++)
    {
        int min = arr[j], imin = j;
        for (int i = j + 1; i < n; i++)
            if (min > arr[i])
            {
                min = arr[i];
                imin = i;
            }
        if (imin != j)
        {
            int t = arr[j];
            arr[j] = arr[imin];
            arr[imin] = t;
        }
    }

    cout << "Sort массив : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    delete[] arr;
}

void Inserts(int n)
{

    int *arr = new int[n];
    cout << "Начинаем вводить массив : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++)
    {
        // i - элемент, которому мы пытаемся найти место вставки
        int j = i;
        while (j != 0 && arr[j - 1] > arr[j])
        {
            int t = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = t;
            j--;
        }
    }

    cout << "Sort массив : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    delete[] arr;
}

void quick_sort(int *arr, int n)
{
    if (n <= 1)
        return;
    int p = arr[0], l = 0, r = n - 1;
    while (l < r)
    {
        // оставляем на месте все элементы "справа", которые больше ведущего элемента
        while (arr[r] >= p && l < r)
            r--;
        // выход из цикла - когда мы нашли элемент, который должен быть расположен с другой стороны
        if (l != r)
        {
            arr[l] = arr[r];
            l++;
        }
        // оставляем на месте все элементы "слева", которые меньше ведущего элемента
        while (arr[l] <= p && l < r)
            l++;
        // выход из цикла - нашли элемент, который должен быть расположен с другой стороны
        if (l != r)
        {
            arr[r] = arr[l];
            r--;
        }
    }
    // установка ведущего элемента на свое место
    arr[l] = p;
    // если ли слева от ведущего элемента кусочек массива
    if (l > 1)
        quick_sort(arr, l);
    // если ли справа от ведущего элемента кусочек массива
    if (r < n - 2)
        quick_sort(arr + r + 1, n - (r + 1));
}

// рекурсивная версия - k - номер элемента, с которого надо начинать делать перестановки
void transposition(int *arr, int n, int k)
{
    // явный случай
    if (k == n - 1)
    {
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
        return;
    }
    // перебор с возвратом
    transposition(arr, n, k + 1);
    for (int i = k + 1; i < n; i++)
    {
        swap(arr[k], arr[i]);
        transposition(arr, n, k + 1);
        swap(arr[k], arr[i]);
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");

    int n;
    cout << "Введите размер массива n = ";
    cin >> n;

    //Inserts(n);
    //Choice(n);
    //bubbleSort(n);
    //CountingSort(n);

    //для Merge сортировки
    /*
    int size;
    cout << "Введите размер массива SIZE= ";
    cin >> size;

    int *arr = new int[size];
    cout << "Начинаем вводить массив  : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    msort(arr, 0, size - 1, size - 1);
    for (int i = 0; i < size; i++)
        cout << arr[i] << ' ';
    delete[] arr;
    */

    //сортировка с рекурсией

    int *arr = new int[n];
    cout << "Начинаем вводить массив : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //transposition(arr,n);
    quick_sort(arr, n);

    cout << "Sort массив : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    delete[] arr;

    getch();
    return 0;
}

