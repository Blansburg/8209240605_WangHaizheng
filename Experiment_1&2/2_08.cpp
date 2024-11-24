#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	double a, x1, x2 = 0;
	cout << "请输入a：";
	cin >> a;
	x1 = a;
	if (a >= 0) {
		while ((-0.00001 > x1 - x2) || (x1 - x2 > 0.00001)) {
			if (x2 != 0)
				x1 = x2;
			x2 = (x1 + a / x1) / 2;
		}
		cout << endl;
		cout << "a的平方根为：" << x2 << endl;
	}
	else {
		cout << endl;
		cout << "负数没有平方根！" << endl;
	}
	return 0;
}
