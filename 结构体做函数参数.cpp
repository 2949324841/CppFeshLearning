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

		"����",
		18,
		666
	};

	printfin1(s1);//ֵ����,�ββ�Ӱ��ʵ��

	StudentIn s2 = {
		"����",
		17,
		555
	};

	printfin2(&s2);//��ַ����,�βλ�Ӱ��ʵ��



	return 0;
}