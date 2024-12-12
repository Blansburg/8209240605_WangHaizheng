#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;

bool cabin[100] = { 0 };

void swap(bool b[]) {
	int f1 = 0, f2 = 0;
	for (f1 = 1;f1 < 101;f1++)
		for (f2 = f1 - 1;f2 < 100;f2 += f1)
			b[f2] = !b[f2];
	return;
}

void oput(bool b[]) {
	int f1 = 0;
	for (f1 = 0;f1 < 100;f1++)
		if (b[f1])
			cout << f1 + 1 << ' ';
	return;
}

int main() {
	swap(cabin);
	oput(cabin);
	return 0;
}