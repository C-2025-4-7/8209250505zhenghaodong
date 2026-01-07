#include<iostream>
using namespace std;
class Volume {
private: 
	double length;
	double width;
	double height;
public:
	void input() {
		cin >> length >> width >> height;

	};
	int getVolume() {
		return length * width * height;
	};
	void output() {
		cout << "体积：" << getVolume() << endl;
	}
};
int main() {
	Volume cube[3];
	for (int i = 0; i < 3; i++) {
		cout << "请输入第" << i + 1 << "个长方体的长,宽，高" << endl;
		cube[i].input();
		cube[i].getVolume();
		cube[i].output();
		cout << endl;
	}
	return 0;
}
