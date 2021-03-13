#include <iostream>
#include <cmath>
using namespace std;

double powX(int x) {
	return (2 * pow(x, 3)) + 6;
}

int main(){
	setlocale(LC_CTYPE, "Russian");

	int x;
	cout << "Введите число x = ";  cin >> x;

	cout << powX(x);

	return 0;
}

