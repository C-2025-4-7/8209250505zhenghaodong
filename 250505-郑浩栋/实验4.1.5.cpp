#include<iostream>
#include<string>
using namespace std;
int indexOf(const string s1, const string s2) {
	int len1 = s1.size();
	int len2 = s2.size();
	if (len1 == 0 || len1 > len2) {
		return -1;
	}
	//ÖğÒ»Æ¥Åäs1
	for (int i = 0; i <= len2 - len1; i++) {
		if (s2.substr(i, len1) == s1) {
			return i;
	}
	}	
	return -1;//Î´Æ¥Åäµ½
}
int main() {
	string s1,s2;
	cout << "Enter the first string:";
	getline(cin,s1);
	cout << "Enter the second string:";
	getline(cin,s2);
	int pos=indexOf(s1, s2);
	cout << "indexOf(¡®¡®" << s1 << "¡¯¡¯,¡®¡®" << s2 << "¡¯¡¯£©is " << pos << endl;
	return 0;
	}