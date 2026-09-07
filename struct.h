#pragma once

#include<string>
//#define MAX 1000
const int MAX = 1000;
struct person
{

	//姓名，性别，年龄，电话，住址
	std::string name;
	std::string sex;
	int age = 0;
	std::string phone ;
	std::string place ;

};

struct contacts
{

	//最大人数，个数
	person PersonArr[MAX];

	//已经有的人数
	int size = 0;

};

