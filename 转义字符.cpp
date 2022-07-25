//转义字符
#include<iostream>
using namespace std;
int main7439827()
{
	//换行符“\n”
	cout << "hello world\n";
	//反斜杠“\\”
	cout << "\\" << endl;
	//水平制表符“\t”
	cout << "aaaa\thelloworld" << endl;
	cout << "aaa\thelloworld" << endl;
	cout << "aa\thelloworld" << endl;
	//\t共占用8个位置，其前的字母和数字与后的空位一共8个位置。作用为使\t后的输出更整齐。

	system("pause");
	return 0;
}