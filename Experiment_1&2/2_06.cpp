#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	unsigned long a, b, i = 0, n = 1, m = 0;
	cout << "请输入两个数字：";
	cin >> a >> b;
	do {
		i++;
		if ((a % i == 0) && (b % i == 0))
			n = i;
		if ((i % a == 0) && (i % b == 0))
			m = i;
	} while (!m);
	cout << endl;
	cout << "最大公约数：" << n << endl;
	cout << "最小公倍数：" << m << endl;
	return 0;
}
