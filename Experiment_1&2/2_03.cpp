#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	double a, b, c;
	cout << "请输入三角形的三边长：";
	cin >> a >> b >> c;
	if ((a + b <= c) || (a + c <= b) || (b + c <= a))
		cout << "这三条边无法构成三角形";
	else if ((a == b) || (a == c) || (b == c))
		cout << "该三角形为等腰三角形";
	else
		cout << "该三角形不为等腰三角形";
	return 0;
}
