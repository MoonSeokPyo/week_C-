#include "Person.h"
//#include <iostream>
//#include <string>
//using namespace std;

int main(void) {
	Person p_1("홍길동", 175, 70), p_2("김길동", 170, 80);

	cout << "<" << p_1.getName() << ">의 키는 <" << p_1.getHeight() << ">cm, 몸무게는 <" << p_1.getWeight() << ">kg이고 BMI는 <" << p_1.getBMI() << ">입니다.\n" << endl;
	cout << "<" << p_2.getName() << ">의 키는 <" << p_2.getHeight() << ">cm, 몸무게는 <" << p_2.getWeight() << ">kg이고 BMI는 <" << p_2.getBMI() << ">입니다.\n" << endl;
	
	cout << "*** 김길동의 setWeight함수를 호출 중... ***\n" << endl;
	p_2.setWeight(75);

	cout << "<" << p_2.getName() << ">의 키는 <" << p_2.getHeight() << ">cm, 몸무게는 <" << p_2.getWeight() << ">kg이고 BMI는 <" << p_2.getBMI() << ">입니다.\n" << endl;
}