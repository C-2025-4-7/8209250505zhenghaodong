#include<iostream>
using namespace std;
bool is_prime(int num) {
	int i, j;
	if (num <= 1) {
		return false;
	}
	if (num == 2) {
		return true;//2是素数
	}
	if (num % 2 == 0) {
		return false;//偶数（除2外）不是素数
	}
	for (i = 3; num / i < i; i += 2) {
		if (!num % i) {
			return false;//若存在i使num被整除，则不是素数
		}
	}
	return true;
}
int main() {
	int count = 0;
	int num = 2;
	cout << "前两百个素数为：" << endl;
	while (count < 200) {
		if (is_prime(num)) {
			cout << num<<'\t';
			count++;
			if (count % 10 == 0) {
				cout << endl;
			}
		}
		num++;
	}
	return 0;
}