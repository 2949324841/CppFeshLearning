#include<iostream>
using namespace std;

//对函数的定义区

//1.无参无返
void test01()
{
	cout << "this is test01 " << endl;
}
//2.无参有返
int test02()
{
	cout << "this is test02 " << endl;
	return 1000;
}
                                                                                         //此区域的函数定义可以放在 main 函数后,并在 main 函数前申明其存在
																						 // 如:    int test0?();    即可,旨在让电脑知道后面test0?的存在,?=1,2,3,4,要实际写出.
//3.有参无返                                                                             //申明可以有多次,而定义只能一次.
void test03(int a)
{
	cout << "this is test03() a= " << a << endl;
}

//有参有返
int test04(int a)
{
	cout << "this is test04 a= " << a << endl;
	return a;
}






int main5435345345() {
	test01();
	test02();
	test03(100);
	int num1 = test04(1000);//此处调用test04时同样会执行其函数内容.
	cout << "num1= " <<num1<< endl;
	return 0;
}