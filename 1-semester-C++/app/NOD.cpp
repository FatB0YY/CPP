
#define _CRT_SECURE_NO_WARNINGS
#include <string>
#include <iostream>

using namespace std;


int main() {
	setlocale(LC_ALL, "Russian");

	int n;
	int i;
	cout << "Введите n = ";
	cin >> n;

	int* arr = new int[n];

	for (i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int k = 0;

	for (i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i != j) {
				if (arr[j] % arr[i] != 0) {
					break;
				}
				else {
					if (j == (n - 1))
					{
						cout << arr[i];

						k++;
					}
				}

			}

		}
	}

	if (k == 0) {
		cout << "NET";
	}

	delete[] arr;
	return 0;

}