#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <cstring>
using namespace std;

char stringS[1000] = { 0 };
int stringN[26] = { 0 };
int sizeS = 0;

void count(const char s[], int counts[]) {
	int f1 = 0, f2 = 0;
	for (f1 = 0;f1 < sizeS;f1++) {
		for (f2 = 0;f2 < 26;f2++) {
			if ((s[f1] == char(f2 + 65)) || (s[f1] == char(f2 + 97))) {
				counts[f2]++;
			}
		}
	}
	for (f2 = 0;f2 < 26;f2++) {
		if (counts[f2] != 0) {
			cout << char(f2 + 97) << ": " << counts[f2] << " times" << endl;
		}
	}
	return;
}

int main() {
	cout << "Enter a string: ";
	cin.getline(stringS, 1000);
	while (stringS[sizeS] != '\0') {
		sizeS++;
	}
	count(stringS, stringN);
	return 0;
}