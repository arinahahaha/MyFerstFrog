#include "func_Person.h"

void print_pars_person(Person p)
{
	cout << "Имя и фамилия: " << p.name << " " << p.surname << endl;
	cout << "Возраст: " << p.age << endl;
	cout << "Вес: " << p.weight << endl;
}
