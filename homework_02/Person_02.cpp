#include <iostream>
#include <string>
using namespace std;

class Person {
private:
	string name;
	int age;
public:
	Person():Person("noname", 0){}
	Person(string name, int age) {
		this->name = name;
		this->age = age;
		cout << this->name << "�� ������ ȣ���" << endl;
	}
	Person(const Person& p) {
		this->name = p.name;
		this->age = p.age;
		cout << this->name << "�� ��������� ȣ���" << endl;
	}
	~Person() {
		cout << this->name << "�� �Ҹ��� ȣ���" << endl;
	}
	string getName() {
		return name;
	}
	int getAge() {
		return age;
	}
	void set(string name, int age) {
		this->name = name;
		this->age = age;
	}
};

void showPersonByValue(Person p) {
	cout << "�̸� = " << p.getName() << ", ���� = " << p.getAge() << endl;
}
void showPersonByRef(Person& p) {
	cout << "�̸� = " << p.getName() << ", ���� = " << p.getAge() << endl;
}

int main(void) {
	int n;
	string name;
	int age;
	cout << "��� �� : ";
	cin >> n;
	Person* p = new Person[n];
	for (int i = 0; i < n; i++)
	{
		cout << "���" << i + 1 << " �̸� ���� : ";
		cin >> name >> age;
		p[i].set(name, age);
	}
	
	for (int i = 0; i < n; i++)
	{
		showPersonByValue(p[i]);
	}
	for (int i = 0; i < n; i++)
	{
		showPersonByRef(p[i]);
	}
	delete[] p;
	
	return 0;
}