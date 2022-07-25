#include<iostream>
using namespace std;

struct book { //可以将一个结构体变量作为一个整体赋值给另一相同类型的结构体变量，可以到达整体赋值的效果；这个成员变量的值都将全部整体赋值给另外一个变量；
	string name;
	int page;                    //第一种创建方式
	int value;
};
struct student {
	string name;
	int number;
	int score;                  //第二种创建方式
}s1;



typedef struct stud {
	string name;
	int num;                          //第三种创建方式
};
int main73827839() {

	struct book b1;
	b1.name = "HARRY POTTER";
	b1.page = 512;
	b1.value = 6;

	cout << b1.name << endl;

	s1.name = "王五";
	cout << s1.name << endl;


	stud s2{
		"张三",
	21
	};
	cout << s2.name << endl;
	return 0;
}