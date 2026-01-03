#include<iostream>
using namespace std;
void merge(const int list1[], const int list2[], int size1, int size2, int list3[]) {
	int i = 0, j = 0,k=0;
	do {
		list3[k++] = min(list1[i], list2[j]);
		list1[i] < list2[j] ? i++ : j++;
		if (j == size2 || i == size1) {
			break;
}
	} while (k < size1 + size2);
	while (i < size1) {
		list3[k++] = list1[i++];
	}
	while (j < size2) {
		list3[k++] = list2[j++];
	}
}
int main() {
	int size1, size2;
	int list1[80], list2[80], list3[160];
	cin >> size1;
	cout << "Enter list1:" << endl;
	for (int i = 0; i < size1; i++) {
		cin >> list1[i];
	}
	cout << endl;
	cin >> size2;
	cout << "Enter list2" << endl; 
	for (int j = 0; j< size2; j++) {
		cin >> list2[j];
		
	}
	merge(list1, list2,  size1,  size2, list3);
	cout << "Merged list:";
	for (int k = 0; k < size1 + size2; k++) {
		cout << list3[k] << " ";
		cout << endl;
	}
	return 0;
}