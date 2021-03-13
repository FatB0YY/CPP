#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

int main()
{
    //руссикй язык
    setlocale(LC_ALL, "Russian");
    //чтобы числа рандома менялись
    srand(time(NULL));

    char Path[] = "test.bin";
    const int N = 17;
    int* array = new int[N];

    fstream file(Path, ios::binary | ios::out);

    if (!file.is_open()) {
        file << "ERROR: 1";
        return -1;
    }

    file.write((char*)&N, sizeof(N));

    for (int i = 0; i < N; i++) {
        array[i] = 10 + rand() % 90;
        file.write((char*)&array[i], sizeof(array[i]));
    }

    file.close();
    delete[] array;
    return 0;
}