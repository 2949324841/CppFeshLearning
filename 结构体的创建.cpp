#include<iostream>
using namespace std;

struct book { //���Խ�һ���ṹ�������Ϊһ�����帳ֵ����һ��ͬ���͵Ľṹ����������Ե������帳ֵ��Ч���������Ա������ֵ����ȫ�����帳ֵ������һ��������
	string name;
	int page;                    //��һ�ִ�����ʽ
	int value;
};
struct student {
	string name;
	int number;
	int score;                  //�ڶ��ִ�����ʽ
}s1;



typedef struct stud {
	string name;
	int num;                          //�����ִ�����ʽ
};
int main73827839() {

	struct book b1;
	b1.name = "HARRY POTTER";
	b1.page = 512;
	b1.value = 6;

	cout << b1.name << endl;

	s1.name = "����";
	cout << s1.name << endl;


	stud s2{
		"����",
	21
	};
	cout << s2.name << endl;
	return 0;
}