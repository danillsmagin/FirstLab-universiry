#include<iostream>
#include<string>
using namespace std;
class Weather {
private:
	string month;
	int DayOfTheMonth;
	int temp;
	string getMonth() {
		return month;
	}
	int getDayOfTheMonth() {
		return DayOfTheMonth;
	}
	int getTemp() {
		return temp;
	}
public:
	void setMonth() {
		cout << "Enter month name: ";
		cin >> month;
	}
	void setDayOfTheMonth() {
		cout << "Enter the number: ";
		cin >> DayOfTheMonth;
	}
	void setTemp() {
		cout << "Enter temperature: ";
		cin >> temp;
	}
	void output() {
		cout << "Month: " << getMonth() << endl;
		cout << "Day: " << getDayOfTheMonth() << endl;
		cout << "Temperature: " << getTemp() << endl;
	}
	void HowColdToday() {
		if (getTemp() < 0) {
			cout << "Today very cold" << endl;
		}
		else if (getTemp() >= 5 && getTemp() <= 15)
		{
			cout << "Today cool" << endl;
		}
		else if (getTemp() > 16) {
			cout << "Today it's warm" << endl;
		}
	}
	void WhatSeasonIsItNow() {
		if (getMonth() == "December" || "January" || "February") {
			cout << "This winter!" << endl;
		}
		else if (getMonth() == "March" || "April" || "May") {
			cout << "This spring!" << endl;
		}
		else if (getMonth() == "June" || "July" || "August") {
			cout << "This summer!" << endl;
		}
		else if (getMonth() == "September" || "October" || "November") {
			cout << "This autumn" << endl;
		}
	}
};
int main() {
	Weather weather;
	weather.setMonth();
	weather.setDayOfTheMonth();
	weather.setTemp();
	weather.output();
	weather.HowColdToday();
	weather.WhatSeasonIsItNow();
}