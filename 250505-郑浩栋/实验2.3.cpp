#include<iostream>
using namespace std; 
int main() {
	float a, b, c;
	cin >> a >> b >> c;
	float Max = max(max(a, b), c), C = a + b + c;
	if (C - Max > Max) {
		cout << "三角形周长=" << C << endl;
		if (a==b|| a = c||b =c)
			cout << "该三角形为等腰三角形" << endl;
		else cout << "该三角形不为等腰三角形" << endl;
	}
	else cout << "不构成三角形" << endl;
	return 0;
}
