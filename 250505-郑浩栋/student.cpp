#include<iostream>
#include"student.h"
#include<cstring>
using namespace std;
void Student::display() {
	cout << "num:" << num<<endl;
	cout << "name:" << name << endl;
	cout << "sex:" << sex << endl;
}
void Student::set_value(int n, const char* na, char s) {
	num = n;
	strcpy_s(name,na);
	sex = s;
}