#include<iostream>
using namespace std;

struct Student {

	string sName;

	int score;             //ѧ���ṹ��
};

struct Teacher {

	string tName;
	                                 //��ʦ�ṹ��
	struct Student sArray[5];

};

void allocatespace1(struct Teacher tArray[], int len) {
	string nameseed = "ABCDE";
	for (int i = 0; i < len; i++) {

		tArray[i].tName = "teacher_";
		tArray[i].tName += nameseed[i];
		for (int j = 0; j < 5; j++) {

			tArray[i].sArray[j].sName = "student_";                //����
			tArray[i].sArray[j].sName += nameseed[j];
			tArray[i].sArray[j].score = 60;
		};
	};

};

void PrintFo2(Teacher tArray[], int len) {

	for (int i = 0; i < len; i++) {

		cout << "��ʦ������: " << tArray[i].tName << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "ѧ��������: " << tArray[i].sArray[j].sName << "ѧ���ķ���: " << tArray[i].sArray[j].score << endl;
		};

	};


};
int main34782974893() {
	
	struct Teacher tArray[3];
	int len = sizeof(tArray) / sizeof(tArray[0]);
	allocatespace1(tArray, len);

	PrintFo2(tArray, len);


	return 0;
}