#include<iostream>
using namespace std;
int indexOf(const char* s1, const char* s2) {
	int len1 = strlen(s1);
	int len2= strlen(s2);
	if (len1 == 0 || len1 > len2) {
		return -1;
	}
	for (int i = 0; i < len2 - len1; i++) {
		bool match = true;
		for (int j = 0; j < len1; j++) {
			if (s1[j] != s2[i + j]) {
				match = false;
				break;
			}
		}
		if (match) {
			return i;
		}	
	}
	 return -1;
}
int main() {
	char s1[100], s2[200];
	cout << "输入字串s1:";
	cin.getline(s1, 100);
	cout << "输入字串s2";
	cin.getline(s2, 200);
	int pos = indexOf(s1, s2);
	if (pos == -1) {
		cout << "s1不是s2的子串" << endl;
	}
	else {
		cout << "子串首次出现下标：" << pos << endl;
	}
	return 0;
}
