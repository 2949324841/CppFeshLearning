#include<iostream>
using namespace std;
int main23122342365() {
	int a = 10;
	/*int* p;
	p = &a;*/
	int* p = &a;
	cout << "sizeof (int *)=" << sizeof(int*) << endl;
	cout << "sizeof (int *)=" << sizeof(float*) << endl;
	cout << "sizeof (int *)=" << sizeof(double*) << endl;
	cout << "sizeof (int *)=" << sizeof(char*) << endl;//32λ(x86)����ϵͳ��Ϊ4,64λ(x64)����ϵͳ��Ϊ8

	return 0;
}