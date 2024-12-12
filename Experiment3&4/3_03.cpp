#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>

#include "mytemperature.h"

using namespace std;

int main() {
	int i;
	cout << "Celsius Fahrenheit | Fahrenheit Celsius" << endl;
	for (i = 0;i < 10;i++) {
		cout << setw(8) << left << fixed << setprecision(1) << static_cast<double>(40 - i);
		cout << setw(13) << left << fixed << setprecision(1) << static_cast<double>(celsius_to_fah(40 - i));
		cout << setw(11) << left << fixed << setprecision(1) << static_cast<double>(120 - i * 10);
		cout << setw(7) << left << fixed << setprecision(2) << static_cast<double>(fahrenheit_to_cels(120 - i * 10)) << endl;
	}
	return 0;
}
