#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

//*************************************************class Student***********************************************

void Student::Display_s()
{
	cout << "\nИмя: " << name << "\nФамилия: " << surname << "\nГруппа: " << group << "\nВозраст: " << age << endl;
}

Student::Student(string n, string s, string g, int a)
{
	name = n;
	surname = s;
	group = g;
	age = a;
}

//***********************************************class Monitor************************************************

Monitor::Monitor(string n, string s, string g, int a, double sc, string p)
	:Student(n, s, g, a)
{
	score = sc;
	phone = p;
	Display_m();
}

void Monitor::Display_m()
{
	cout << "\nИмя: " << name << "\nФамилия: " << surname << "\nГруппа: " << group << "\nВозраст: " << age;
	cout << "\nОценка успеваемости: " << score << "\nТелефон: " << phone << endl;
}