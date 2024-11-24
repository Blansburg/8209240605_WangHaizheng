#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	double f;
	cout << "请输入华氏温度：";
	cin >> f;
	cout << "对应的摄氏温度：" << fixed << setprecision(2) << static_cast<double>((f - 32) / 1.8) << endl;
	return 0;
}
