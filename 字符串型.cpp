#include <iostream>
#include <string>//用c++字符串时，要包含这个头文件（在此次并不需要？存疑。。。）
using namespace std;
int main5644576546()
{//c语言风格的字符串
	//注意事项 char 字符串名[]
	//注意事项2 等号后面要用双引号，将字符串包含起来
	char str[] = "hello world";
	cout << str << endl;
//c++风格的字符串
	string str2 = "hello world!";
	cout << str2 << endl;

	system("pause");
	return 0;
}