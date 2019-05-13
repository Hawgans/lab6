#include <iostream>
#include <string>
#include "Student.h"
#include "Alive.h"
#include "Animal.h"

using namespace std;

int main()
{
	system("chcp 1251");
	int v;

	cout << "Выберите класс с которым хотите работать: \nStudent - 1\nAlive - 2\nAnimal - 3" << endl;
	cin >> v;

	switch (v)
	{
	case 1:
	{
		string n, s, g, p;
		int a;
		double sc;

		cout << "Имя: ";
		cin >> n;
		cout << "Фамилия: ";
		cin >> s;
		cout << "Группа: ";
		cin >> g;
		cout << "Возраст: ";
		cin >> a;


		Student player1(n, s, g, a);
		player1.Display_s();

		cout << "Оценка: ";
		cin >> sc;
		cout << "Телефон: ";
		cin >> p;

		Monitor player(n, s, g, a, sc, p);

		break;
	}

	case 2:
	{
		cout << "Работа с классом рыб" << endl;
		Alive creat;
		cin >> creat;
		cout << creat;
		Fish fish(creat.move, creat.enviroment, creat.alive);
		fish.Display_f();

		cout << "\nРабота с классом птиц" << endl;
		Alive creat2;
		cin >> creat;
		cout << creat;
		Bird bird(creat2.move, creat2.enviroment, creat2.alive);
		bird.Display_b();

		cout << "\nРабота с классом животных" << endl;
		Alive creat3;
		cin >> creat3;
		cout << creat3;
		Animal animal(creat3.move, creat3.enviroment, creat3.alive);
		animal.Display_an();

		break;
	}

	case 3:
	{
		cout << "\nРабота с классом животных" << endl;
		Alive creat3;
		cin >> creat3;
		cout << creat3;
		Animal animal(creat3.move, creat3.enviroment, creat3.alive);
		animal.Display_an();

		Dog dog(animal.move, animal.enviroment, animal.alive, animal.color, animal.food);
		dog.Display_d();

		Cat cat(animal.move, animal.enviroment, animal.alive, animal.color, animal.food);
		cat.Display_c();
		break;
	}

	default:
	{
		cout << "Неправильный вариант!" << endl;
	}
	}
}