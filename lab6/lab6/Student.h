#pragma once
#include <string>

using namespace std;

class Student
{
public:
	string name;
	string surname;
	string group;
	int age;

	Student(string n, string s, string g, int a);
	void Display_s();
	~Student()
	{}
};

class Monitor : public Student//класс старосты
{
protected:
	double score;//переменная для оценки
	string phone;
public:
	Monitor(string n, string s, string g, int a, double sc, string p);
	void Display_m();
	~Monitor()
	{}
};