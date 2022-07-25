#include<iostream>
using namespace std;

int main7328917389() {

	//1.定义指针
	int a = 10;
	//指针定义的语法
	int* p;
	//指针变量赋值
	p = &a;//&为对a取址
	cout << &a << endl;
	cout << p << endl;

	//2.指针的使用
	//通过*操作指针变量指向的内存,*是指解引用
	cout << " * p=" << *p << endl;
	*p = 1000;
	cout << " * p=" << *p << endl;
	cout << "a= " << a << endl;





	return 0;
}