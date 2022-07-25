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

//结构体指针可以通过 -> 操作符 来访问结构体中的成员,如上.