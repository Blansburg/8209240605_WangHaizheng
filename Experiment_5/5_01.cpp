#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>

using namespace std;

class Time          // 定义Time类
{
private:              // 数据成员为公用的
	int hour;
	int minute;
	int second;
public:
	void input() {
		cin >> hour;      //输入设定的时间 
		cin >> minute;
		cin >> second;
	}
	void output() {
		cout << hour << ":" << minute << ":" << second << endl;
	}
};
int main()
{
	Time t1;           //定义t1为Time类对象
	t1.input();
	t1.output();
	return 0;
}