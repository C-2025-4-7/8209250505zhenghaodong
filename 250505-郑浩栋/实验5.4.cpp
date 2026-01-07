#include<iostream>
using namespace std;
class Student{

public:

	int id;
	int score;
	void setin(int i,int s) {
		id = i;
		score = s;
	}
};
void max(Student* p, int n) {
	int maxScore = p->score;
	int maxid = p->id;
	for (int i = 1; i < n; i++) {
		if (maxScore < (p + i)->score) {
			maxScore = (p + i)->score;
			maxid = (p + i)->id;
		}
	}
	cout << "最高成绩：" << maxScore << endl;
	cout << "对应学号：" << maxid << endl;
}
int main() {
	Student stu[5];
	stu[0].setin(01, 89);
	stu[1].setin(02, 90);
	stu[2].setin(03, 91);
	stu[3].setin(04, 90);
	stu[4].setin(05, 92);
	max(stu, 5);
	return 0;
}