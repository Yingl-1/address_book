#pragma once


#include<string>
#include"struct.h"

/*	1.添加联系人
	2.显示联系人
	3.删除联系人
	4.查找联系人
	5.修改联系人
	6.清空联系人
	0.退出通讯录*/

//clear
void cls();


//add_person
void add_person(contacts & conPerson);

//show_person
void show_person(contacts* conPerson);

//delet_person
void delet_person(contacts& conPerson);

//detection
int detection_exist(contacts* conPerson, std::string personname);

//find
void find_person(contacts*conPerson);

//alter
void alter_person(contacts & conPerson);

//clear_person
void clear_person(contacts*conPerson);