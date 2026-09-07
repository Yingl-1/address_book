#include <iostream>
#include"showWindows.h"
#include"a_s_d_s_a_c.h"
#include"struct.h"


int input(int & UserInputNumber) {

	/*	1.添加联系人
	2.显示联系人
	3.删除联系人
	4.查找联系人
	5.修改联系人
	6.清空联系人
	0.退出通讯录*/

	while (true) {


		showWindows();//invoke showWindows
		
		static contacts conPerson;
		//user  input
		std::cout << "请输入数字0~6" << std::endl;
		std::cin >> UserInputNumber;
		if (UserInputNumber >= 0 && UserInputNumber <= 6) {

			switch (UserInputNumber) {

			case 1:
				add_person(conPerson);		//引用
				break;

			case 2:

				show_person(&conPerson);//指针
				break;

			case 3:
				delet_person(conPerson);//引用
				break;

			case 4:
				find_person(&conPerson);//指针
				break;

			case 5:

				alter_person(conPerson);//引用
				break;

			case 6:

				clear_person(&conPerson);//指针
				break;

			case 0:

				std::cout << "欢迎下次使用" << std::endl;

				system("pause");
				return 0;

			}

		}
		else {

			std::cout << "输入错误，请重新输入" << std::endl;

		}

	}

}



