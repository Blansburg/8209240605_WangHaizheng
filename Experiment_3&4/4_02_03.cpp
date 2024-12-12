#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <cstring>
using namespace std;

char Arr[1000] = { 0 };
int ArrL = 0;

void Sorting(int* SortArr) {
	int f1 = 0, f2 = 0, c;
	for (f1 = 0;f1 < ArrL;f1++)
		for (f2 = ArrL - 1;f2 > f1;f2--)
			if (SortArr[f1] < SortArr[f2]) {
				c = SortArr[f1];
				SortArr[f1] = SortArr[f2];
				SortArr[f2] = c;
			}
	return;
}

int main() {
	cout << "Enter the array length: ";
	cin >> ArrL;
	int* Arr = new int[ArrL];
	int f1 = 0;
	cout << "Enter the array elements: ";
	for (f1 = 0;f1 < ArrL;f1++) {
		cin >> Arr[f1];
	}
	Sorting(Arr);
	for (f1 = 0;f1 < ArrL;f1++) {
		cout << Arr[f1] << " ";
	}
	delete[] Arr;
	return 0;
}