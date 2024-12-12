#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;

int sorted1[160] = { 0 };
int sorted2[160] = { 0 };
int sorted3[160] = { 0 };
int sizelt1 = 0, sizelt2 = 0;



int iput(int list0[]){
	int f0 = 0, size0 = 0;
	cout << "Enter list:";
	cin >> size0;
	for (f0 = 0;f0 < size0;f0++)
		cin >> list0[f0];
	return size0;
}

void oput(const int list0[], int size0) {
	int f0 = 0;
	for (f0 = 0;f0 < size0;f0++)
		cout << list0[f0] << ' ';
	cout << endl;
	return;
}

void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
	int f1 = 0, f2 = 0, f3 = 0;
	for (f3 = 0;f3 < size1 + size2;f3++) {
		if (f2 == size2) {
			list3[f3] = list1[f1];
			f1++;
		}
		else if (f1 == size1) {
			list3[f3] = list2[f2];
			f2++;
		}
		else if (list1[f1] < list2[f2]) {
			list3[f3] = list1[f1];
			f1++;
		}
		else {
			list3[f3] = list2[f2];
			f2++;
		}
	}
}

int main() {
	sizelt1 = iput(sorted1);
	sizelt2 = iput(sorted2);
	oput(sorted1, sizelt1);
	oput(sorted2, sizelt2);
	merge(sorted1, sizelt1, sorted2, sizelt2, sorted3);
	oput(sorted3, sizelt1 + sizelt2);
	return 0;
}