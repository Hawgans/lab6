#include <iostream>
#include <string>
#include "Alive.h"

//**************************************************class Alive**************************************************

istream& operator>> (istream& in, Alive& creature)//перегрузка оператора ввода для класса Alive
{
	cout << "Как передвигается существо? ";
	in >> creature.move;
	cout << "В какой среде обитает это существо? ";
	in >> creature.enviroment;
	cout << "Живет ли еще это существо? ";
	in >> creature.alive;

	return in;
}

ostream& operator<< (ostream& out, const Alive& creature)//перугрузка оператора вывода для класса Alive
{
	out << "Передвижение: " << creature.move << "\nОкружающая среда: " << creature.enviroment << endl;
	out << "Cуществование в наше время: " << creature.alive << endl;

	return out;
}

//**************************************************class Fish***************************************************

Fish::Fish(string m, string e, string a)
{
	move = a;
	enviroment = e;
	alive = a;
	color = "Синий";
	food = "Планткон";
	species = "Cиний кит";
}

void Fish::Display_f()
{
	cout << "\nПередвижение: " << move << "\nОкружающая среда: " << enviroment << endl;
	cout << "Cуществование в наше время: " << alive << "\nЦвет: " << color << endl;
	cout << "Питание: " << food << "\nВид: " << species << endl;
}

//*******************************************class Bird****************************************************
Bird::Bird(string m, string e, string a)
{
	move = a;
	enviroment = e;
	alive = a;
	color = "Красный";
	food = "Насекомые";
	fly = "Да";
	species = "Попугай";
}

void Bird::Display_b()
{
	cout << "\nПередвижение: " << move << "\nОкружающая среда: " << enviroment << endl;
	cout << "Cуществование в наше время: " << alive << "\nЦвет: " << color << endl;
	cout << "Питание: " << food << "\nВозможность летать: " << fly << "\nВид: " << species << endl;
}

//************************************************Class Animal**************************************************

Animal::Animal(string m, string e, string a)
{
	move = a;
	enviroment = e;
	alive = a;
	color = "оранжевый";
	food = "Мясо";
}

void Animal::Display_an()
{
	cout << "\nПередвижение: " << move << "\nОкружающая среда: " << enviroment << endl;
	cout << "Cуществование в наше время: " << alive << "\nЦвет: " << color << endl;
	cout << "Питание: " << food << endl;
}