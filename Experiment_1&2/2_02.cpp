#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	double x;
	cout << "请输入x：";
	cin >> x;
	if ((0 < x) && (x < 1))
		cout << "y=" << double(3 - 2 * x) << endl;
	else if ((1 <= x) && (x < 5))
		cout << "y=" << double(2 / (4 * x) + 1) << endl;
	else if ((5 <= x) && (x < 10))
		cout << "y=" << double(x * x) << endl;
	else
		cout << "不在定义域内！" << endl;
	return 0;
}
