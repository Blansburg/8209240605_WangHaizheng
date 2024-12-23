﻿//student.cpp                     在此文件中进行函数的定义
#include <iostream>
#include <cstring>
#include <string>
#include "student.h"            //不要漏写此行，否则编译通不过

using namespace std;

void Student::display() {       //在类外定义display类函数
    cout << "num:" << num << endl;
    cout << "name:" << name << endl;
    cout << "sex:" << sex << endl;
}
void Student::set_value(int xx, string yy, char zz) {
	num = xx;
	name = yy;
	sex = zz;
}