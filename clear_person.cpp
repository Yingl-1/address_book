#include"a_s_d_s_a_c.h"
#include"struct.h"
#include<string>
#include<iostream>
void clear_person(contacts* conPerson) {

	if (conPerson->size != 0) {

		for (auto i = 0;i < conPerson->size;i++) {



			conPerson->PersonArr[i].name = "";
			conPerson->PersonArr[i].sex = "";
			conPerson->PersonArr[i].age = 0;
			conPerson->PersonArr[i].phone = "";
			conPerson->PersonArr[i].place = "";

			conPerson->size = 0;

			std::cout << "清空通讯录完成";
			std::cout << std::endl;

			cls();
		}
	}
	else {

		std::cout << "通讯录是空的";
		std::cout << std::endl;

		cls();

	}

}