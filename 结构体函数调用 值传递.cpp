#include<iostream>
using namespace std;

struct student {

	string name;
	int age;
	int score;
};

struct school {

	struct student number;
	int sum;
};

void printf1(struct student s){
	cout << s.name << s.age << s.score << endl;
}
int main3232323232() {

	struct student s1 {
		"����",
			17,
			94

	};

	struct school s2 {

		s1,
			600

	};

	printf1(s1); //ֵ���� ��������ʵ��
	return 0;
}