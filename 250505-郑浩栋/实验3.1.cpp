#include<iostream>
using namespace std;
int gcd_lcm(int m, int n, int& lcm) {
	int a = m, b = n;
	while (a%b != 0) {
		int temp = a % b;
		a = b;
		b = temp;
	}
	lcm = (m * n / a);//计算最小公倍数
	return a;//返回最大公约数
}
int main() {
	int m, n;
	int lcm;
	cout << "请输入两个自然数m和n" << endl;
	cin >> m >> n;
	cout << "m和n的最大公约数为" << gcd_lcm(m, n, lcm) << endl;
	return 0;


}



