#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	double a, b;
	char c;
	cout << "请输入第一个数字：";
	cin >> a;
	do {
		cout << "请输入运算符：";
		cin >> c;
		if ((c != '+') && (c != '-') && (c != '*') && (c != '/') && (c != '%'))
			cout << "你要不要看看你在输入什么" << endl;
	} while ((c != '+') && (c != '-') && (c != '*') && (c != '/') && (c != '%'));
	do {
		cout << "请输入第二个数字：";
		cin >> b;
		if (((c == '/') || (c == '%')) && (b == 0))
			cout << "你要不要看看你在输入什么" << endl;
	} while (((c == '/') || (c == '%')) && (b == 0));
	cout << endl << "运算结果：";
	switch (c) {
	case '+':
		cout << (a + b) << endl;
		break;
	case '-':
		cout << (a - b) << endl;
		break;
	case '*':
		cout << (a * b) << endl;
		break;
	case '/':
		cout << (a / b) << endl;
		break;
	case '%':
		cout << (int(a) % int(b)) << endl;
		break;
	}
	return 0;
}
