#include"a_s_d_s_a_c.h"
#include"struct.h"
#include<string>
#include<iostream>

void alter_person(contacts&conPerson) {

	if (conPerson.size != 0) {

		std::cout << "请输入需要修改的联系人名称：";

		//输入（变量）
		std::string name;

		std::cin >> name;

		int math = detection_exist(&conPerson, name);

		if (math != -1) {

			std::cout << "请输入修改后的名称：";
			std::string name;
			std::cin >> name;
			conPerson.PersonArr[math].name = name;

			std::cout << "请输入修改后的性别：";
			std::string sex;
			std::cin >> sex;
			conPerson.PersonArr[math].sex = sex;

			std::cout << "请输入修改后的年龄：";
			int age = 0;
			std::cin >> age;
			conPerson.PersonArr[math].age = age;

			std::cout << "请输入修改后的电话：";
			std::string phone;
			std::cin >> phone;
			conPerson.PersonArr[math].phone = phone;

			std::cout << "请输入修改后的地址：";
			std::string place;
			std::cin >> place;
			conPerson.PersonArr[math].place = place;

			std::cout << "修改成功" << std::endl;

			cls();

		}
		else {

			std::cout << "没有这个人";

			cls();

		}

	}
	else
	{
		std::cout << "通讯录为空" << std::endl;

		cls();
	}

}