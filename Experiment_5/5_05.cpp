#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>

using namespace std;

class Point {
private:
	int x;
	int y;
public:
	void iniPoint(int i, int j) {
		x = i;
		y = j;
	}
	void setPoint(int i, int j) {
		x += i;
		y += j;
	}
	void display() {
		cout << x << ' ' << y;
	}
};

int main()
{
	Point p;
	int i, j;
	p.iniPoint(60, 80);
	cin >> i >> j;
	p.setPoint(i, j);
	p.display();
	return 0;
}
