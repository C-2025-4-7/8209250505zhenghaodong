#pragma once
class Student {
private:
	int num;
	   char name[20];
	   char sex;
public:
	void display();
	void set_value(int n, const char* na, char sex);
};
