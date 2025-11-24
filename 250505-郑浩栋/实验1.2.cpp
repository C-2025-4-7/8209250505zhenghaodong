#include<iostream>
using namespace std;
int main() {
	float const Pi = 3.1415;
	float r, h;
	cout << "ÇëÊäÈëÔ²×¶µÄ¸ß" << endl;
	cin >> h;
	cout << "ÇëÊäÈëÔ²×¶µÄµ×Ãæ°ë¾¶" << endl;
	cin >> r;
	cout << r * r * Pi * h / 3;
	return 0;
}