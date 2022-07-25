#include<iostream>
using namespace std;

int main634872678()
{
	float f1 = 3.14f;//float为单精度，double为双精度，但默认都为6位有效数字。
	double f2 = 3.15;//e的含义：n e m =nx10^m。
	float f3 = 7e-2;
	double f4 = 6e4;

	cout << "f1=" << f1 << endl;
	cout << "f2=" << f2 << endl; 
	cout << "f3=" << f3 << endl;
	cout << "f4=" << f4 << endl;

	system("pause");
	return 0;
}