//student.h                (这是头文件，在此文件中进行类的声明)

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

class Student {            //类声明
private:
	int num;
	string name;
	char sex;
public:                    //公用成员函数原型声明
	void display();
	void set_value(int xx, string yy, char zz);
};