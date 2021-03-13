#include <iostream>
#include <cmath>
using namespace std;

double powAB(int a, int b) {
	return pow(a, b);
}

int main(){

	int a, b;
	cout << "Введите число a = ";  cin >> a;
	cout << "Введите число b = ";  cin >> b;

	cout << powAB(a, b);

	return 0;
}

