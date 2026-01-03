#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int a[10];//存储10个数
	int b[10];//存储不同的数
	int count = 0;//统计不同数字的个数
	cout << "Enter ten numbers: " ;
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
		bool isExist = false;
		for (int j = 0; j < count; j++) {
			if (a[i] == b[j]) {
				isExist = true;
				break;
			}
		}
		if (!isExist) {
			b[count] = a[i];
			count++;
		}

	}
	cout << "The distinct numbers are: ";
	for (int i = 0; i < count; i++) {
		cout << b[i] << " ";
	}
	return 0;
}