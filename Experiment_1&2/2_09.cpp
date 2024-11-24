#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int i, j = 1, k = 0;
	for (i = 1;j <= 100;i++) {
		k += j;
		j *= 2;
	}
	cout << double(k) * 0.8 / i << endl;
	return 0;
}
