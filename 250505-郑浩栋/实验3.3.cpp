#include<iostream>
#include<iomanip>
#include"mytemperature.h"
int main() {
	cout << fixed << setprecision(1);
	cout <<setw(10)<< "Celsius" << setw(15) << "Fahrenheit" << setw(10) << "|" << setw(10) <<  "Fahrenheit"<< setw(15) << "Celsius" << endl;
	double cel = 40.0, fah = 120.0;
	while (cel >= 31.0 && fah >= 30.0) {
		cout << setw(10) << cel*1.0 << setw(15) << celsius_to_fah(cel) << setw(10) <<"|" << setw(10) <<fah*1.0 << setw(15) << fahrenheit_to_sels(fah) << endl;
		cel -= 1.0, fah -= 10.0;
	}
	return 0;
}