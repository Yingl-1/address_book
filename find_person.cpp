#include"a_s_d_s_a_c.h"
#include<iostream>
#include<string>

void find_person(contacts *conPerson) {

	if (conPerson->size != 0) {

			std::cout << "请输入你要查找的人：";

			std::string name;
			std::cin >> name;

	int math=detection_exist(conPerson, name);
		if (math != -1) {

			// 输出找到的联系人各字段，不能直接输出整个 struct，如果输出全部，需要重载运算符
			std::cout << "姓名: " << conPerson->PersonArr[math].name << "\t";
			std::cout << "性别: " << conPerson->PersonArr[math].sex << "\t";
			std::cout << "年龄: " << conPerson->PersonArr[math].age << "\t";
			std::cout << "电话: " << conPerson->PersonArr[math].phone << "\t";
			std::cout << "地址: " << conPerson->PersonArr[math].place << std::endl;

		}
		else {

			std::cout << "没有这个人" << std::endl;

		}

		//按任意键清屏
		cls();

	}
	else {

		std::cout << "通讯录为空" << std::endl;

		cls();
	}

}