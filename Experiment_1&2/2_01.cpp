#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	char i;
	cout << "请输入字符：";
	cin >> i;
	if ((97 <= int(i)) && (int(i) <= 122))
		cout << "对应的大写字母：" << char(int(i) - 32) << endl;
	else
		cout << "对应的ASCII码：" << int(i) + 1 << endl;
	return 0;
}
