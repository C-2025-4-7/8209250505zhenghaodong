#include<iostream>
using namespace std;
int main() {
	bool lockers[100] = { false };
	for (int student = 1; student <= 100; student++) 
	{
		for (int locker = student - 1; locker < 100; locker += student)
		{
			lockers[locker] = !lockers[locker];
		}
	}
	int counts = 0;
	for (int i = 0; i < 100; i++) {
		
		if (lockers[i] = true) {
			cout << i + 1 << " ";
			counts++;
		}
		if (counts % 12 == 0) {
			cout << endl;
		}
	}
	return 0;
}