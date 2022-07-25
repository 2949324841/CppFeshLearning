#include <iostream>
#include<string>
using namespace std;
class building;//前向引用声明
class person {
public:
	person();
	void visit1();
	void visit2();
private:
	building* build;
};
class building {
public:
	friend void person::visit1(); //将visit1设置为友元。学习这种语法，直接把需要设置成友元函数的名字复制过来再加一个friend就行。
	string m_bed;
	building();
private:
	string m_pub;
};
building::building() {  //building的构造函数
	this->m_bed = "卧室";
	this->m_pub = "客厅";
}
person::person() { //person的构造函数
	build = new building;
}
void person::visit1() {//被设置成友元函数的类的成员函数
	cout << build->m_bed << endl;
	cout << build->m_pub << endl;
}
void person::visit2() {//未被设置成友元函数的类的成员函数
	cout << build->m_bed << endl;
	//cout << build->m_pub << endl;//这就不能访问
}

int main()
{	person p;
	p.visit1();
	p.visit2();
}
