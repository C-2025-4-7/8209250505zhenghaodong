#include<iostream>
using namespace std;
int main() {
	int ans = 0, num = 2, d = 0;
	while (num <= 100) {
		ans += num;
		d++, num *= 2;
	}
	cout << num * 0.8 / d;
	return 0;
}