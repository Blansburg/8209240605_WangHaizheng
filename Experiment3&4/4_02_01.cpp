﻿#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <cstring>
using namespace std;

char string1[1000] = { 0 };
char string2[1000] = { 0 };
int size1 = 0, size2 = 0;

int indexof(const char *s1, const char *s2) {
	int f1 = 0, f2 = 0, n = -1;
	for (f1 = 0;f1 <= size1 - size2;f1++) {
		if (s1[f1] == s2[0]) {
			for (f2 = 0;f2 < size2;f2++)
				if (s1[f1] != s2[f2])
					break;
			n = f1 + 1;
		}
	}
	return n;
}

int main() {
	cout << "Enter the first string: ";
	cin.getline(string1, 1000);
	cout << "Enter the second string: ";
	cin.getline(string2, 1000);
	char* s1 = string1, * s2 = string2;
	while (s1[size1] != '\0') {
		size1++;
	}
	while (s2[size2] != '\0') {
		size2++;
	}
	cout << "indexof(\"" << string1 << "\",\"" << string2 << "\") is ";
	cout << indexof(s1, s2);
	return 0;
}
