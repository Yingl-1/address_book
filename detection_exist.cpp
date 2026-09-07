#include"a_s_d_s_a_c.h"
#include"struct.h"
#include<string>

//参数1传递通讯录，参数2传递名字
int detection_exist(contacts* conPerson, std::string personname) {

	for (auto i = 0; i < conPerson->size; i++)
	{
		if (conPerson->PersonArr[i].name == personname) {
				
			return i;

		}
	}

			return -1;
	

}