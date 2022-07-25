//数据类型的存在意义：给变量分配合适的内存空间
/*短整型short：2字节，整型int：4字节，长整型long：4字节(64位环境下为8字节），长长整型long long：8字节 */

#include<iostream>
using namespace std;

int main462876() {
	//短整型(-32768~32767)
	short num1 = 10;
	//整型
	int num2 = 10;
	//长整型
	long num3 = 10;
	//常常整型
	long long num4 = 10;

		cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	cout << "num3=" << num3 << endl;
	cout << "num4=" << num4 << endl;

	system("pause");
	return 0;
}