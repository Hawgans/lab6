#include <iostream>
#include <string>
#include "Animal.h"
#include "Alive.h"

using namespace std;

//********************************************class Dog****************************************************

Dog::Dog(string m, string e, string a, string c, string f)
	:Animal(m, e, a)
{
	color = c;
	food = f;
	breed = "Немецкая овчарка";
	size = "Средняя";
}

void Dog::Display_d()
{
	cout << "\nПередвижение: " << move << "\nОкружающая среда: " << enviroment << endl;
	cout << "Cуществование в наше время: " << alive << "\nЦвет: " << color << endl;
	cout << "Питание: " << food << "\nПорода: " << breed << "\nРазмер: " << size << endl;
}

//******************************************class Cat******************************************************

Cat::Cat(string m, string e, string a, string c, string f)
	:Animal(m, e, a)
{
	color = c;
	food = f;
	breed = "Сибирский кот";
	size = "Средняя";
}

void Cat::Display_c()
{
	cout << "\nПередвижение: " << move << "\nОкружающая среда: " << enviroment << endl;
	cout << "Cуществование в наше время: " << alive << "\nЦвет: " << color << endl;
	cout << "Питание: " << food << "\nПорода: " << breed << "\nРазмер: " << size << endl;
}