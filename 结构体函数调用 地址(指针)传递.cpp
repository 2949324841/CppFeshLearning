#include <iostream>
using namespace std;

struct book {

	string name;
	int price;
};
int main3231452332() {

	book b1{

		"HarryPotter",
		30

	};
	book* p = &b1;

	cout << "name: " << p->name << " price:" << p->price << endl;



	return 0;
}

//�ṹ��ָ�����ͨ�� -> ������ �����ʽṹ���еĳ�Ա,����.