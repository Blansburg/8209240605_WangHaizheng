#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;

int num[10] = { 0 };

int main() {
	int i = 0;
	int j = 0;
	int f1 = 0, f2 = 0;
	bool b = true;
	cout << "Enter ten numbers: ";
	for (f1 = 0;f1 < 10;f1++) {
		cin >> j;
		b = true;
		for (f2 = 0;f2 < i;f2++)
			if (j == num[f2])
				b = false;
		if (b) {
			num[i] = j;
			i++;
		}
	}
	cout << "The distinct numbers are: ";
	for (f2 = 0;f2 < i;f2++)
		cout << num[f2] << " ";
	return 0;
}
