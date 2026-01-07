#include<iostream>
using namespace std;
class Point {
private:int x;
	   int y;
public:
	Point() {
		x = 60;
		y = 80;
	}
	void setpoint(int i, int j) {
		x += i;
		y += j;
	}
	void display() {
		cout << "修改后的坐标值为：" << "(" << x << "," << y << ")" << endl;
	}
};
int main() {
	Point p;
	p.setpoint(3, 4);
	p.display();
	return 0;
}
