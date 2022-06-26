#pragma once
#include <iostream>
#include <string>
#include <ctime>

class Human {
public:
	Human() {}
	Human(std::string name,
		std::string surname);
	Human(std::string surname,
		std::string name,
		std::string patronymic,
		int day, int month, int year);

	void setName(std::string name);
	std::string getName() const;
	void setSurName(std::string surname);
	std::string getSurname() const;
	void setPatrName(std::string patr);
	std::string getPatrName()const;
	void setBirthday(int day, int mon, int year);
	std::string getBirthday() const;
	void setFullName(std::string sur, std::string name, std::string patr);
	std::string fullName() const;

private:
	std::string _name;
	std::string _patronymic;
	std::string _surname;
	tm _birthday{};
};
class Student {
public:
	Student() {}
	Student(Human name,
		std::string group,
		std::string direction,
		int amountMarks,
		int* marks);
	~Student();
	std::string nameStudent();
	void setGroup_(std::string gr);
	std::string getGroup();
	void setDir(std::string dir);
	std::string getDir();
	void setGrades(int amountMarks);
	double average();


private:
	Human name_person;
	int* _marks = nullptr;
	int _amountMarks = 0;
	std::string _group;
	std::string _direction;

};

class Flat {
public:
	Flat() {}
	Flat(Human* nameR,
		int num,
		std::string adress,
		double area);
	void setnumResident(int num);
	int getnumResident() const;
	void setResident(Human residents, int pos);
	Human getResident(int pos)const;
	void setAdress(std::string adress);
	std::string getAdress()const;
	void setNum(int num);
	int getNum() const;
	void setArea(double area);
	double getArea()const;
	void ListRes();

private:
	Human* _resident;
	std::string _adress;
	int _numberR;
	double _area;
};
