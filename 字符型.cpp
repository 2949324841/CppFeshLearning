#include<iostream>
using namespace std;

int main485367() {
	//字符型变量的创建方式
	char ch = 'a';
	cout << ch << endl;
	//字符型变量所占用的内存大小
	cout << "char变量所占用的内存大小：" << sizeof(char) << endl;
	//字符型变量用‘’而不是“”
	//字符型变量对应的ASCII编码
	cout << "字符型变量所对应的ASCII编码：" << (int)ch << endl;
	//首先应记住的ASCII编码对应字母：a--97，A--65。


	system("pause");
	return 0;
}