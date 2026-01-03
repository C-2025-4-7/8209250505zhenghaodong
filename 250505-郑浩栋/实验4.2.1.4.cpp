#include<iostream>
using namespace std;
int* f() {
	int* list = new int[4] {1, 2, 3, 4};//堆区动态分配数组
	return list;
}
int main() {
	int* p = f();
	cout << p[0] << endl;
	cout << p[1] << endl;
	delete[]p;//释放堆区数组，避免内存泄露
	return 0;
}



