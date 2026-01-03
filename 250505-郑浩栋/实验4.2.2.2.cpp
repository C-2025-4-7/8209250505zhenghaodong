#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
int parseHex(const char* const hexString) {
	int result = 0;
	int len = strlen(hexString);
	for (int i = 0; i < len; i++) {
		char ch = toupper(hexString[i]);
		int num;
		if (isdigit(ch)) {
			num = ch - '0';//数字字符转数值
		}
		else if (ch >= 'A' && ch <= 'F') {
			num = 10 + (ch - 'A');
		}
		else { return -1;}
		result = result * 16 + num;
	}
	return result;
}
int main() {
	char hexstr[100];
	cout << "输入16进制字符串： ";
	cin >> hexstr;
	int dec = parseHex(hexstr);
	if (dec == -1) {
		cout << "输入的16进制字符串非法" << endl;
	}
	else {
		cout << "转化为10进制： " << dec << endl;
	}
	return 0;
}