#include <iostream>
using namespace std;

class Company {
private:
	string name;
	int money;
public:
	Company():Company("", 0){}
	Company(string n, int m) {
		name = n;
		money = m;
	}
	string getName() {
		return name;
	}
	void show() {
		cout << "회사명 = " << name << ", 자본금 = " << money << endl;
	}
	//Company operator+(const Company& op2) {
	//	Company tmp;
	//	if (money < op2.money) {
	//		tmp.name = op2.name;
	//		tmp.money = money + op2.money;
	//		return tmp;
	//	}
	//	else {
	//		tmp.name = name;
	//		tmp.money = money + op2.money;
	//		return tmp;
	//		//return *this;
	//	}
	//}
	Company operator+(const Company& op2) {
		cout << "\n\n" << this << "\n\n";
		if (money < op2.money) {
			name = op2.name;
			money = money + op2.money;
			return *this;
		}
		else {
			name = name;
			money = money + op2.money;
			return *this;
		}
	}
	Company operator*(int op2) {
		Company tmp;
		tmp.name = name;
		tmp.money = money * op2;
		return tmp;
	}
	friend Company operator*(int op1, const Company& op2);
	bool operator<(const Company& op2) {
		if (money < op2.money) {
			return true;
		}
		else {
			return false;
		}
	}
};

Company operator*(int op1, const Company& op2) {
	Company tmp;
	tmp.name = op2.name;
	tmp.money = op2.money * op1;
	return tmp;
}

int main() {
	Company a("Oracool", 300), b("SunMacro", 200), c("Golgol", 600);

	a.show();
	b.show();
	c.show();

	a = a + b;
	a.show();

	a = a * 2;
	a.show();

	c = 2 * c;
	c.show();

	if (a < c)
		cout << a.getName() << " < " << c.getName() << endl;
	else
		cout << a.getName() << " >= " << c.getName() << endl;

	return 0;
}