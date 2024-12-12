#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;

double num[10] = { 0 };

void swap(double &a, double &b) {
	double c;
	if (a < b) {
		c = a;
		a = b;
		b = c;
	}
	return;
}

int main() {
	int i = 0;
	int j = 0;
	int f1 = 0, f2 = 0;
	bool b = true;
	for (f1 = 0;f1 < 10;f1++)
		cin >> num[f1];
	for (f1 = 0;f1 < 10;f1++)
		for (f2 = 9;f2 > f1;f2--)
		    swap(num[f2], num[f2-1]);
	for (f1 = 0;f1 < 10;f1++)
		cout << num[f1] << " ";
	return 0;
}
