//add

#include<iostream>
#include"a_s_d_s_a_c.h"
#include"struct.h"



void add_person(contacts&conPerson) {
	
	//判断是否已经满了
	if (conPerson.size>= MAX) {

		std::cout << "当前通讯录已满";

		return;

	}
	else {

		std::cout << "请输入姓名：";
		std::cin >> conPerson.PersonArr[conPerson.size].name;
		std::cout << "请输入性别：";
		//std::cin >> conPerson.PersonArr[conPerson.size].sex;
		

		while (true) {
			std::cin >> conPerson.PersonArr[conPerson.size].sex;
			if (conPerson.PersonArr[conPerson.size].sex == "男" || conPerson.PersonArr[conPerson.size].sex == "女") {

				break;

			}
			else {


				std::cout << "你输入的性别有误，请重新输入：";

				
			}

		}	
		
				std::cout << "请输入年龄：";
				std::cin >> conPerson.PersonArr[conPerson.size].age;
				std::cout << "请输入电话：";
				std::cin >> conPerson.PersonArr[conPerson.size].phone;
				std::cout << "请输入住址：";
				std::cin >> conPerson.PersonArr[conPerson.size].place;

				conPerson.size++;

				std::cout << "添加成功" << std::endl;

				cls();
	}


}
