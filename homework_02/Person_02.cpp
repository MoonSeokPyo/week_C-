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
		cout << this->name << "의 생성자 호출됨" << endl;
	}
	Person(const Person& p) {
		this->name = p.name;
		this->age = p.age;
		cout << this->name << "의 복사생성자 호출됨" << endl;
	}
	~Person() {
		cout << this->name << "의 소멸자 호출됨" << endl;
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
	cout << "이름 = " << p.getName() << ", 나이 = " << p.getAge() << endl;
}
void showPersonByRef(Person& p) {
	cout << "이름 = " << p.getName() << ", 나이 = " << p.getAge() << endl;
}

int main(void) {
	int n;
	string name;
	int age;
	cout << "사람 수 : ";
	cin >> n;
	Person* p = new Person[n];
	for (int i = 0; i < n; i++)
	{
		cout << "사람" << i + 1 << " 이름 나이 : ";
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