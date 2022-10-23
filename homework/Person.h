#pragma once
#include <string>
#include <iostream>
using namespace std;

class Person {
private:
	int Height, weight;
	string name;
public:
	Person(string n, int h, int w);
	~Person();
	string getName();
	int getHeight();
	int getWeight();
	void setWeight(int w);
	double getBMI();
};
