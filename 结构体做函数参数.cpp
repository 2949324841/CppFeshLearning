#include<iostream>
using namespace std;

struct StudentIn {

	string name;
	int age;
	int score;
};

void printfin1(struct StudentIn s)
{

	cout << "name: " << s.name << " age: " << s.age << " score: " << s.score << endl;

};


void printfin2(struct StudentIn * p)
{
	cout << "name: " << p->name << " age: " << p->age << " score: " << p->score << endl;
	
};
int main323232323232323() {
	StudentIn s1 = {

		"张三",
		18,
		666
	};

	printfin1(s1);//值传递,形参不影响实参

	StudentIn s2 = {
		"李四",
		17,
		555
	};

	printfin2(&s2);//地址传递,形参会影响实参



	return 0;
}