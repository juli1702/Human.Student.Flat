#include <iostream>
#include "Header.h"
#include <string>
#include <ctime>

int main() {
	setlocale(LC_ALL, "Russian");

	Human Julia("������", "����", "���������", 17, 2, 1997);
	Human Evgenii("�����", "�������", "���������", 30, 9, 1992);
	Human Olga("�����������", "�����", "���������", 21, 10, 1993);

	Student num1(Julia, "105n", "��������������� ���������", 5, new int[5] {10,12,11,6,7 });
	Student num2(Evgenii, "501u", "�������������", 6, new int[6]{ 11,6,4,12,12,9 });
	Student num3(Olga, "402pf", "�����������", 8, new int[8]{ 10,10,11,12,9,5,4,12 });

	Flat f1(new Human[2]{ Julia, Evgenii }, 2, "������������ 4", 42.9);
	Flat f2(new Human[1]{ Olga }, 1, "���������� 60", 45);

	//Julia 
	std::cout <<"���: " << Julia.fullName() << std::endl;
	std::cout << "���� ��������: " << Julia.getBirthday() << "\n\n";
	//Evgenii
	std::cout << "���: " << Evgenii.fullName() << std::endl;
	std::cout << "���� ��������: " << Evgenii.getBirthday() << "\n\n";
	//Olya
	std::cout << "���: " << Olga.fullName() << std::endl;
	std::cout << "���� ��������: " << Olga.getBirthday() << "\n\n";

	//St Julia
	std::cout << "�������: " << num1.nameStudent() << std::endl;
	std::cout << "�����������: " << num1.getDir() << "\n������: " << num1.getGroup() << std::endl;
	std::cout << "������� �������������� ������: " << num1.average() << "\n\n";

	//St Evgenii
	std::cout << "�������: " << num2.nameStudent() << std::endl;
	std::cout << "�����������: " << num2.getDir() << "\n������: " << num2.getGroup() << std::endl;
	std::cout << "������� �������������� ������: " << num2.average() << "\n\n";
	//St Olga
	std::cout << "�������: " << num3.nameStudent() << std::endl;
	std::cout << "�����������: " << num3.getDir() << "\n������: " << num3.getGroup() << std::endl;
	std::cout << "������� �������������� ������: " << num3.average() << "\n\n";

	//Flat 1
	std::cout << "�������� 1: " << f1.getAdress() << std::endl;
	std::cout << "���������� �����������: " << f1.getNum() << std::endl;
	std::cout << "������� ��������: " << f1.getArea() << std::endl;
	std::cout << "������ �������: ";
	f1.ListRes();
 	std::cout << "\n\n";

	//Flat 2
	std::cout << "�������� 2: " << f2.getAdress() << std::endl;
	std::cout << "���������� �����������: " << f2.getNum() << std::endl;
	std::cout << "������� ��������: " << f2.getArea() << std::endl;
	std::cout << "������ �������: ";
	f2.ListRes();
	std::cout << "\n";

	return 0;
}