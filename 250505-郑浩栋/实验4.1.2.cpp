#include<iostream>
#include<vector>
using namespace std;
void swap(double* a, double* b) {
	double temp = *a;
	*a = *b;
	*b = temp;
}
void bubblesort(vector<double>&list) {
	int listSize = list.size();
	bool changed = true;
	do 
	{
		changed = false;
		for (int i = 0; i < listSize - 1; i++) 
		{
			if (list[i] > list[i + 1]) {
				swap(list[i], list[i + 1]);
				changed = true;
			}
	    }
		listSize--;
	} while (changed);
}
int main() {
	vector <double> list(10);
	cout << "请输入10个双精度的数字" << endl;
	for (int i = 0; i < 10; i++) {
		cin>>list[i];
	}
	bubblesort(list);
	for (int i = 0; i < 10; i++) {
		cout << list[i] << '\t';
	}
	return 0;

}