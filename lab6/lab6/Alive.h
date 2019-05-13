#pragma once
#include <string>

using namespace std;

class Alive
{
public:
	string move;
	string enviroment;
	string alive;

	friend istream& operator>> (istream& in, Alive& creature);
	friend ostream& operator<< (ostream& out, const Alive& creature);
};

class Fish : public Alive
{
protected:
	string color;
	string food;
	string species;
public:
	Fish(string m, string e, string a);
	void Display_f();
	~Fish()
	{}
};

class Bird : public Alive
{
protected:
	string color;
	string food;
	string species;
	string fly;
public:
	Bird(string m, string e, string a);
	void Display_b();
	~Bird()
	{}
};

class Animal : public Alive
{
public:
	string color;
	string food;
	Animal(string m, string e, string a);
	void Display_an();
	~Animal()
	{}
};