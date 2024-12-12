#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;

int divis(const long& a, const long& b) {
	int i;
	for (i = min(a, b);i >= 1;i--) {
		if ((a % i == 0) && (b % i == 0))
			break;
	}
	return i;
}

int multi(const long& a, const long& b) {
	int i = max(a, b);
	do {
		if ((i % a == 0) && (i % b == 0))
			break;
		i++;
	}while (1 == 1);
	return i;
}

int main() {
	unsigned long m, n;
	cin >> m >> n;
	cout << endl;
	cout << "最大公约数：" << divis(m,n) << endl;
	cout << "最小公倍数：" << multi(m,n) << endl;
	return 0;
}
