#include<iostream>
using namespace std;
class Time {
	//数据成员私有
private:int hour;
	   int minute;
	   int sec;
public:
	 void Settime() {
		 int h, m, s;
		 cout << "请输入现在的钟点:" << endl;
		 cin >> h;
		 cout << "请输入现在的分钟:" << endl;
		 cin >> m;
		 cout << "请输入现在的秒数:" << endl;
		 cin >> s;
		 hour = (h >= 0 && h <= 24) ? h:0;
		 minute = (m>=0&&m<=60)?m:0;
		 sec = (s>=0&&s<=60)?s:0;
	}
	 void Showtime(){
		 cout << hour << ":" << minute << ":" << sec<<endl;
	 }
};
int main()
{
	int h, s, m;
	Time t1; 
	t1.Settime( );
	t1.Showtime();
	return 0;
}