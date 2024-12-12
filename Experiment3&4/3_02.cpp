#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;

int prime[200] = { 0 };
int i;

bool is_prime(int num) {
	int j;
	for (j = 0;j < i;j++) {
		if (num % prime[j] == 0)
			return false;
	}
	return true;
}

int main() {
	int m = 1;
	i = 0;
	do {
		m++;
		if (is_prime(m)) {
			cout << m << ' ';
			prime[i] = m;
			i++;
			if (i%10==0)
				cout << endl;
		}
	} while (i < 200);
	return 0;
}
