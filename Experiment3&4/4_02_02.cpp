#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <cstring>
using namespace std;

char Hexstr[1000] = { 0 };
int sizeH = 0;

int parseHex(const char* const hexString) {
	int f1 = 0, n1 = 1, t1 = 0;
	for (f1 = sizeH - 1;f1 >= 0;f1--) {
		if (hexString[f1]>char(64))
			t1 += n1 * (int(hexString[f1])-55);
		else
			t1 += n1 * (int(hexString[f1])-48);
		if (f1 != 0) {
			n1 *= 16;
		}
	}
	return t1;
}

int main() {
	cout << "Enter a Hex: ";
	cin.getline(Hexstr, 1000);
	char* sH = Hexstr;
	while (sH[sizeH] != '\0') {
		sizeH++;
	}
	cout << parseHex(sH);
	return 0;
}