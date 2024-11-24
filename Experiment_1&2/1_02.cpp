#include<iostream>
using namespace std;

const double pi = 3.1415927;

int main()
{
	double r, h;
	cout << "请输入底面半径：";
	cin >> r;
	cout << "请输入圆锥的高：";
	cin >> h;
	cout << "圆锥的体积为：" << r * r * pi * h / 3 << endl;
	return 0;
}
