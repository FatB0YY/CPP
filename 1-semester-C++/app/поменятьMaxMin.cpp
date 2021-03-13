#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <regex>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int t;
    int i;
    int n;
    cout << "Введите размер массива (n >= 2) n = ";
    cin >> n;



    if (n >= 2) {  

        int* arr = new int[n];
        for (int i = 0; i < n; i++) { 
            cin >> arr[i];
        }

        int max = 0; 
        int min = 0;  

        for (int i = 0; i < n; i++) {
            if (arr[i] > arr[max]) {       
                max = i;  
               
            }
            if (arr[i] < arr[min]) {      
                min = i;
               
            }
        }

        if (max == min){
            cout << "max = min";  
        }
        else {
            t = arr[max];
            arr[max] = arr[min];
            arr[min] = t;

              
            for (int i = 0; i < n; i++) {
                cout << arr[i];            
            }
        }  
    }
    else {
        cout << "n < 2";
    }


    return 0;
}
//дз на 03:10:20