#include<iostream>
using namespace std;

int main7328917389() {

	//1.����ָ��
	int a = 10;
	//ָ�붨����﷨
	int* p;
	//ָ�������ֵ
	p = &a;//&Ϊ��aȡַ
	cout << &a << endl;
	cout << p << endl;

	//2.ָ���ʹ��
	//ͨ��*����ָ�����ָ����ڴ�,*��ָ������
	cout << " * p=" << *p << endl;
	*p = 1000;
	cout << " * p=" << *p << endl;
	cout << "a= " << a << endl;





	return 0;
}