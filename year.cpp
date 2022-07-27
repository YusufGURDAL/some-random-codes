#include <iostream>
using namespace std;

bool leapYear(int);

int year;

int main() {
	cout << "Please enter a year:";
	cin >> year;
	if (leapYear(year)) 
		cout << year << " is leap year" << endl;
	else 
		cout << year << " isn't leap year" << endl;

}

bool leapYear() {
	if (year % 4 == 0) 
		return true;
	else 
		return false;
}