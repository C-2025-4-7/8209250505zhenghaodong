#include<iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	cout << "a+b=" << a + b << endl;
	cout << "a-b=" << a - b << endl;
	cout << "a*b=" << a * b << endl;
	if (b != 0)
	{
		cout << "a%b=" << a % b << endl;
		cout << "a/b=" << a / b << endl;
	}
	else
	{
		cout << "a/b=error" << endl;
		cout << "a%b=error" << endl;
	}
	return 0;
}