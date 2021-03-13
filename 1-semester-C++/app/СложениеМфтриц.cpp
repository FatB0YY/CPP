#include <iostream>
#include <cmath>

using namespace std;
// Найти сумму двух квадратных матриц n*n используя функции

int** CreateMattrix(int n) {
	int **m = new int *[n];

	for (int i = 0; i < n; i++)
		m[i] = new int[n];

	return m;
}

void PrintMattrix(int** m, int n) {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cout << m[i][j];
}

void FillMattrix(int** m, int n) {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> m[i][j];
}

int** SumMattrix(int n, int** m1, int** m2){
	int** result = CreateMattrix(n);


	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			result[i][j] = m1[i][j] + m2[i][j];

	return result;
}

int Power(int n, int m) {
	return pow(n, m);
}


int main()
{
	int n;
	cout << "Enter size of mattrix: ";
	cin >> n;

	int** m1 = CreateMattrix(n);
	int** m2 = CreateMattrix(n);

	FillMattrix(m1, n);
	FillMattrix(m2, n);

	int** result = SumMattrix(n, m1, m2);

	cout << "Sum of mattrixes: \n";

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) {
			cout << result[i][j] << ' ';
		}
		cout << '\n';
	}
	return 0;
}
