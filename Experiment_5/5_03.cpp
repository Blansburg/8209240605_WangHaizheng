#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>

using namespace std;

class Cuboid          
{
private:              
	int length;
	int width;
	int height;
public:
	void input() {
		cin >> length;
		cin >> width;
		cin >> height;
	}
	void output() {
		cout << length * width * height << ' ';
	}
};
int main()
{
	Cuboid c1, c2, c3;
	c1.input();
	c2.input();
	c3.input();
	c1.output();
	c2.output();
	c3.output();
	return 0;
}