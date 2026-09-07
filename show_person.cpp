#include"a_s_d_s_a_c.h"
#include <iostream>



void show_person(contacts * conPerson) {

	if (conPerson->size == 0) {//判断是否空

		std::cout << "通讯录为空" << std::endl;

		cls();

	}
	else {

		for (auto i = 0;i < conPerson->size;i++) {

			//姓名，性别，年龄，电话，住址
			std::cout << "姓名:" << conPerson->PersonArr[i].name << "\t";
			std::cout << "性别:" << conPerson->PersonArr[i].sex << "\t";
			std::cout << "年龄:" << conPerson->PersonArr[i].age << "\t";
			std::cout << "电话:" << conPerson->PersonArr[i].phone<< "\t";
			std::cout << "住址:" << conPerson->PersonArr[i].place << std::endl;


		}

	}

}