#include <iostream>
#include "Header.h"
#include <string>
#include <ctime>

int main() {
	setlocale(LC_ALL, "Russian");

	Human Julia("Рябова", "Юлия", "Сергеевна", 17, 2, 1997);
	Human Evgenii("Рябов", "Евгений", "Андреевич", 30, 9, 1992);
	Human Olga("Туркулецкая", "Ольга", "Сергеевна", 21, 10, 1993);

	Student num1(Julia, "105n", "Изобразительное искусство", 5, new int[5] {10,12,11,6,7 });
	Student num2(Evgenii, "501u", "Юриспруденция", 6, new int[6]{ 11,6,4,12,12,9 });
	Student num3(Olga, "402pf", "Лингвистика", 8, new int[8]{ 10,10,11,12,9,5,4,12 });

	Flat f1(new Human[2]{ Julia, Evgenii }, 2, "Крестинского 4", 42.9);
	Flat f2(new Human[1]{ Olga }, 1, "Большакова 60", 45);

	//Julia 
	std::cout <<"ФИО: " << Julia.fullName() << std::endl;
	std::cout << "Дата рождения: " << Julia.getBirthday() << "\n\n";
	//Evgenii
	std::cout << "ФИО: " << Evgenii.fullName() << std::endl;
	std::cout << "Дата рождения: " << Evgenii.getBirthday() << "\n\n";
	//Olya
	std::cout << "ФИО: " << Olga.fullName() << std::endl;
	std::cout << "Дата рождения: " << Olga.getBirthday() << "\n\n";

	//St Julia
	std::cout << "Студент: " << num1.nameStudent() << std::endl;
	std::cout << "Направление: " << num1.getDir() << "\nГруппа: " << num1.getGroup() << std::endl;
	std::cout << "Среднее арифметическое оценок: " << num1.average() << "\n\n";

	//St Evgenii
	std::cout << "Студент: " << num2.nameStudent() << std::endl;
	std::cout << "Направление: " << num2.getDir() << "\nГруппа: " << num2.getGroup() << std::endl;
	std::cout << "Среднее арифметическое оценок: " << num2.average() << "\n\n";
	//St Olga
	std::cout << "Студент: " << num3.nameStudent() << std::endl;
	std::cout << "Направление: " << num3.getDir() << "\nГруппа: " << num3.getGroup() << std::endl;
	std::cout << "Среднее арифметическое оценок: " << num3.average() << "\n\n";

	//Flat 1
	std::cout << "Квартира 1: " << f1.getAdress() << std::endl;
	std::cout << "Количество проживающих: " << f1.getNum() << std::endl;
	std::cout << "Площадь квартиры: " << f1.getArea() << std::endl;
	std::cout << "Список жильцов: ";
	f1.ListRes();
 	std::cout << "\n\n";

	//Flat 2
	std::cout << "Квартира 2: " << f2.getAdress() << std::endl;
	std::cout << "Количество проживающих: " << f2.getNum() << std::endl;
	std::cout << "Площадь квартиры: " << f2.getArea() << std::endl;
	std::cout << "Список жильцов: ";
	f2.ListRes();
	std::cout << "\n";

	return 0;
}