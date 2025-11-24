#include<iostream>
using namespace std;
int main(){	
	char s;	
	cin>>s;	
	if(s>='a'&&s<='z')
		cout<<(char)('A'+s-'a');
	else cout<<(int)(s)+1;
	return 0;
}