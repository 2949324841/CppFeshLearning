#include<iostream>
using namespace std;
struct student {

	string name;
	int age;
	int score;

};

struct teacher {

	string name;
	int age;
	student s1;

};
//��������student�����֣��ɱ�ʾΪ��teacher.student.name��
int main36782168793() {

	
	teacher t1;

	t1.name = "����";
	t1.age = 35;
	t1.s1.name = "����";
	t1.s1.age = 18;
	t1.s1.score = 100;

	cout << "teacher`s name: " << t1.name << " age: " << t1.age <<"\n" << "teacher`s student`s name: " << t1.s1.name << " age: " << t1.s1.age << " score: " << t1.s1.score << endl;
    

	return 0;
}