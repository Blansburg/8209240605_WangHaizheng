#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	char c;
	int l = 0, d = 0, s = 0, o = 0;
	cout << "请输入字符串：";
	do {
		cin.get(c);
		if (c == ' ')
			s++;
		else if ((48 <= int(c)) && (int(c) <= 57))
			d++;
		else if ((65 <= int(c)) && (int(c) <= 90))
			l++;
		else if ((97 <= int(c)) && (int(c) <= 122))
			l++;
		else if (c != '\n')
			o++;
	} while (c != '\n');
	cout << endl;
	cout << "    字母的个数：" << l << endl;
	cout << "    数字的个数：" << d << endl;
	cout << "    空格的个数：" << s << endl;
	cout << "其他字符的个数：" << o << endl;
	return 0;
}
