#include<iostream>
#include"student.h"
using namespace std;
int main(){
	Student stun;
	stun.set_value(007,"zhangsan", 'm');
	stun.display();
	return 0;

}