#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;

int peach(int day){
	if (day > 1)
		return (peach(day - 1) + 1) * 2;
	else
		return 1;
}

int main() {
	cout << peach(10);
	return 0;
}
