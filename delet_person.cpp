
#include"a_s_d_s_a_c.h"
#include<iostream>
#include<string>
#include"struct.h"
#include<iostream>

void delet_person(contacts& conPerson) {

	if (conPerson.size != 0) {

		while (true) {

			std::cout << "请输入你要删除的人姓名：" << std::endl;

			//定义一个变量接收
			std::string name;

			std::cin >> name;

			int math = detection_exist(&conPerson, name);

			if (math != -1) {

				//删除
				for (auto i = math; i < conPerson.size - 1; i++)
				{
					//遍历数组，使i后面每一个数据前移达到删除i的目标
					conPerson.PersonArr[i] = conPerson.PersonArr[i + 1];

				}
				//执行删除后，通讯录要减少
				conPerson.size--;

				std::cout << "删除成功" << std::endl;

				break;

			}
			else {

				std::cout << "你要删除的人不存在" << std::endl;

				cls();

				break;

			}

		}
	}
	else {

		std::cout << "通讯录为空" << std::endl;

		cls();
	}
}