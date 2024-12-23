#include <iostream>
#include <iomanip>
#include <cmath>
#include <algorithm>

using namespace std;

class Student {
private:
	int IDNo_;
public:
	int grade;
	void input() {
		cin >> IDNo_;
		cin >> grade;
	}
	void output() {
		cout << IDNo_ << ' ';
	}
};

void max(Student ss[]) {
	int f1, f0, m1 = 0;
	for (f1 = 0;f1 < 5;f1++)
		if (m1 < ss[f1].grade) {
			m1 = ss[f1].grade;
			f0 = f1;
		}
	ss[f0].output();
	return;
}

int main()
{
	Student s[5];
	int f1;
	for (f1 = 0;f1 < 5;f1++) {
		s[f1].input();
	}
	max(s);
	return 0;
}