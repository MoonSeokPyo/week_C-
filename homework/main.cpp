#include "Person.h"
//#include <iostream>
//#include <string>
//using namespace std;

int main(void) {
	Person p_1("ȫ�浿", 175, 70), p_2("��浿", 170, 80);

	cout << "<" << p_1.getName() << ">�� Ű�� <" << p_1.getHeight() << ">cm, �����Դ� <" << p_1.getWeight() << ">kg�̰� BMI�� <" << p_1.getBMI() << ">�Դϴ�.\n" << endl;
	cout << "<" << p_2.getName() << ">�� Ű�� <" << p_2.getHeight() << ">cm, �����Դ� <" << p_2.getWeight() << ">kg�̰� BMI�� <" << p_2.getBMI() << ">�Դϴ�.\n" << endl;
	
	cout << "*** ��浿�� setWeight�Լ��� ȣ�� ��... ***\n" << endl;
	p_2.setWeight(75);

	cout << "<" << p_2.getName() << ">�� Ű�� <" << p_2.getHeight() << ">cm, �����Դ� <" << p_2.getWeight() << ">kg�̰� BMI�� <" << p_2.getBMI() << ">�Դϴ�.\n" << endl;
}