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
	cout << "sizeof (int *)=" << sizeof(char*) << endl;//32位(x86)操作系统下为4,64位(x64)操作系统下为8

	return 0;
}