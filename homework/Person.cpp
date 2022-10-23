#include "Person.h"
//#include <iostream>
//using namespace std;

Person::Person(string n, int h, int w) {
	name = n;
	Height = h;
	weight = w;
}
Person::~Person() {
	cout << name << "ÀÇ ¼Ò¸êÀÚ°¡ È£ÃâµÊ" << endl;
}
string Person::getName() {
	return name;
}
int Person::getHeight() {
	return Height;
}
int Person::getWeight() {
	return weight;
}
void Person::setWeight(int w) {
	weight = w;
}
double Person::getBMI() {
	return (double)weight / (((double)Height / 100) * ((double)Height / 100));
}