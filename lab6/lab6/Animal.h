#pragma once
#include <string>
#include "Alive.h"

using namespace std;

class Dog : public Animal
{
protected:
	string breed;//переменная для пород
	string size;
public:
	Dog(string m, string e, string a, string c, string f);
	void Display_d();
	~Dog()
	{}
};

class Cat : public Animal
{
protected:
	string breed;
	string size;
public:
	Cat(string m, string e, string a, string c, string f);
	void Display_c();
	~Cat()
	{}
};