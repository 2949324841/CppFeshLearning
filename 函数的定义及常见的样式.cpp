#include<iostream>
using namespace std;

//�Ժ����Ķ�����

//1.�޲��޷�
void test01()
{
	cout << "this is test01 " << endl;
}
//2.�޲��з�
int test02()
{
	cout << "this is test02 " << endl;
	return 1000;
}
                                                                                         //������ĺ���������Է��� main ������,���� main ����ǰ���������
																						 // ��:    int test0?();    ����,ּ���õ���֪������test0?�Ĵ���,?=1,2,3,4,Ҫʵ��д��.
//3.�в��޷�                                                                             //���������ж��,������ֻ��һ��.
void test03(int a)
{
	cout << "this is test03() a= " << a << endl;
}

//�в��з�
int test04(int a)
{
	cout << "this is test04 a= " << a << endl;
	return a;
}






int main5435345345() {
	test01();
	test02();
	test03(100);
	int num1 = test04(1000);//�˴�����test04ʱͬ����ִ���亯������.
	cout << "num1= " <<num1<< endl;
	return 0;
}