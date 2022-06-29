#include "Header.h"
#include <iostream>
#include <string>
#include <ctime>

Human::Human(std::string surname,
	std::string name,
	std::string patronymic,
	int day, int month, int year) {
	_surname = surname;
	_name = name;
	_patronymic = patronymic;
	_birthday.tm_mday = day;
	_birthday.tm_mon = month;
	_birthday.tm_year = year;
}
void Human::setName(std::string name) {
	_name = name;
}
std::string Human::getName() const {
	return _name;
}
void  Human::setSurName(std::string surname) {
	_surname = surname;
}
std::string Human::getSurname() const {
	return _surname;
}
void Human::setPatrName(std::string patr) {
	_patronymic = patr;
}
std::string Human::getPatrName()const {
	return _patronymic;
}
void  Human::setBirthday(int day, int mon, int year) {
	_birthday.tm_mday = day;
	_birthday.tm_mon = mon;
	_birthday.tm_year = year;
}
std::string Human::getBirthday() const {
	return std::to_string(_birthday.tm_mday) + "." + std::to_string(_birthday.tm_mon) + "." + std::to_string(_birthday.tm_year);
}
void  Human::setFullName(std::string sur, std::string name, std::string patr) {
	_surname = sur;
	_name = name;
	_patronymic = patr;
}
std::string Human::fullName() const {
	return _surname + " " + _name + " " + _patronymic;
}
Student::Student(Human name,
	std::string group,
	std::string dir,
	int amountMarks,
	int *marks){
	name_person = name;
	_group = group;
	_direction = dir;
	_marks = new int[amountMarks];
	for (int i = 0; i < amountMarks; i++) {
		_marks[i] = marks[i];
	}
	_amountMarks = amountMarks;
}
Student::~Student() {
	if (_marks) {
		delete[]_marks;
	}
}
std::string Student::nameStudent() {
	return name_person.fullName();
}
void Student::setGroup_(std::string gr) {
	_group = gr;
}
std::string Student::getGroup() {
	return _group;
}
void Student::setDir(std::string dir) {
	_direction = dir;
}
std::string Student::getDir() {
	return _direction;
}
void Student::setGrades(int amountMarks) {
	if (_marks) {
		int* tmp = new int[_amountMarks];
		for (int i = 0; i < _amountMarks; i++)
		{
			tmp[i] = _marks[i];
		}
		delete[]_marks;
		_marks = new int[amountMarks];
		for (int i = 0; i < _amountMarks; i++)
		{
			_marks[i] = tmp[i];
		}
		delete[]tmp;
		tmp = nullptr;
	}
	_marks = new int[amountMarks];
	_amountMarks = amountMarks;
}
double Student::average() {
	double sum = 0;
	for (int i = 0; i < _amountMarks; i++) {
		sum += _marks[i];
	}
	return sum / _amountMarks;
}

Flat::Flat(Human* nameR,
	int num,
	std::string adress,
	double area){
	_numberR = num;
	_adress = adress;
	_area = area;
	_resident = new Human[num];
	for (int i = 0; i < num; i++) {
		_resident[i] = nameR[i];
	}
}
void Flat::setnumResident(int num) {
	if (_resident != nullptr) {
		Human* tmp = new Human[_numberR];
		for (int i = 0; i < _numberR; i++)
		{
			tmp[i] = _resident[i];
		}
		delete[]_resident;
		_resident = new Human[num];
		for (int i = 0; i < _numberR; i++)
		{
			_resident[i] = tmp[i];
		}
		delete[]tmp;
		tmp = nullptr;
	}
	else
		_resident = new Human[num];
	_numberR = num;
}
int Flat::getnumResident() const {
	return _numberR;
}
void Flat::setResident(Human resident, int pos) {
	if (pos > _numberR || pos < 0)
		false;
	_resident[pos] = resident;
}
Human Flat::getResident(int pos)const {
	return _resident[pos];
}
void Flat::setAdress(std::string adress) {
	_adress = adress;
}
std::string Flat::getAdress()const {
	return _adress;
}
void Flat::setNum(int num) {
	_numberR = num;
	if (num <= 0) {
		throw  std::range_error("1.Invalid argument");
	}
}
int Flat::getNum() const noexcept {
	return _numberR;
}
void Flat::setArea(double area) {
	_area = area;
	if (area <= 0) {
		throw  std::range_error("2.Invalid argument");
	}
}
double Flat::getArea()const noexcept{
	return _area;
}
void Flat::ListRes() {
	for (int i = 0; i < _numberR; i++)
		std::cout << i + 1 << ". " << _resident[i].fullName()<< std::endl;
}