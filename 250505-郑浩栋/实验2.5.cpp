#include<string>
#include<iostream>
using namespace std;
int main() {
	string s;
	getline(cin, s);
	int ans[5] = { 0,0,0,0,0 };
	for (int i = 0; i < s.size(); i++) {
		{
			if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))ans[1]++;
			else if (s[i] == ' ')ans[2]++;
			else if (s[i] >= '0' && s[i] <= '9')ans[3]++;
			else ans[4]++;
		}
		for (int i = 1; i <= 4; i++)
			cout << ans[i] << " ";
		return 0;
	}