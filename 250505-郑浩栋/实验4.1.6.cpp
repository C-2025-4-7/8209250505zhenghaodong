#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
void count(const char s[], int counts[]) {
	for (int i = 0; i < 26; i++) {
		counts[i] = 0;
	}
	int len = strlen(s);
	for (int i = 0; i < len; i++) {
		if (isalpha(s[i])) {
			char upperch;
			if (s[i] >= 'a' && s[i] <= 'z') {
				upperch = s[i] - 32;//小写转大写
			}
			else {
				upperch = s[i];
			}
			int index = upperch - 'A';//计算字母对应的下标
			counts[index]++;//对应字母数加1
		}
	}
}
int main() {
	char s[100];
	int counts[100];
	cout << "Enter a string:";
	cin.getline(s, 100);
	count(s,counts);
	//输入非0数据结果
	cout << "数据结构：" << endl;
	for (int i = 0; i < 26; i++) {
		if (counts [i]> 0) {
			char ch = 'a' + i;//下标转对应小写字母
			cout << ch << ":" << counts[i] << "times" << endl;
		}
	}
	return 0;
}
