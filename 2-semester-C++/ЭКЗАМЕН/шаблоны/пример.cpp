#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

template <typename T>
T find_max(T first_num, T second_num) {
    if (first_num > second_num) return first_num;
    else return second_num;
}

template <typename T>
T rectangle(T a, T b) {
    T P = (a * 2) + (b * 2);
    T S = (a * b);

    return S + P;
}


// Arrays...

template <typename T>
T findMax(T* arr, int n) {
    T max = arr[0];
    for (int i = 0; i < n; i++){
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Sort bubble
template <typename T1, typename T2>
T2* bubbleSort(T1 n, T2* arr) {
    for (int i = 0; i < n - 1; i++){
        bool isSwaped = false;
        for (int j = 0; j < n - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                T2 temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isSwaped = true;
            }
        }
        if (!isSwaped)
            break;
    }
    cout << "Sort arr : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " | ";
    }
    cout << endl;
    return arr;
}

template <typename T1, typename T2>
double average(T1 n, T2* arr) {
    double x = 0;
    for (int i = 0; i < n; i++) {
        x += arr[i];
    }
    return x / n;
}



int main() {
    //руссикй язык
    setlocale(LC_ALL, "Russian");

    cout << find_max(1, 4) << endl;
    cout << find_max(3.25, 2.17) << endl;
    cout << find_max("a", "y") << endl;
    cout << find_max<double>(4, 1.6) << endl;
    
    cout << "S + P = "<< rectangle(5, 5) << endl;
    cout << "S + P = " << rectangle(5.4, 5.4) << endl;
    cout << "S + P = " << rectangle<double>(5.4, 5) << endl;

    // Arrays...
    int n = 2;
    double* arr = new double[n];
    for (int i = 0; i < n; i++){
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
    
    cout << "max = " << findMax(arr, n) << endl;
    bubbleSort(n, arr);
    cout << "Srednee = " << average(n, arr) << endl;

    delete[] arr;
    return 0;
}
