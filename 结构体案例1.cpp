#include<iostream>
using namespace std;

struct Student {

	string sName;                //����ѧ���Ľṹ��
	int score;

};

struct Teacher {

	string tName;                  //��������ѧ���ṹ�����ʦ�ṹ��

	struct Student ArrayS[5];

};

void allocatespace(Teacher ArrayT[], int len) {
	string nameseed = "ABCDE";                               //Ϊÿλ��ʦ�������е�ѧ��(����,����)����
	for (int i = 0; i < len; i++) {

		ArrayT[i].tName = "Teacher_";
		ArrayT[i].tName += nameseed[i];

		for (int j = 0; j < 5; j++) {

			ArrayT[i].ArrayS[j].sName = "Student_";
			ArrayT[i].ArrayS[j].sName = nameseed[j];
			ArrayT[i].ArrayS[j].score = 60;
		};
	};


};

void PrintFo(Teacher ArrayT[],int len ) {
	for (int i = 0; i < len; i++) {
		cout << "��ʦ������: " << ArrayT[i].tName << endl;
		for (int j = 0; j < 5; j++) {                                             //�������ڴ�ӡ�ĺ���
			cout << "ѧ��������: " << ArrayT[i].ArrayS[j].sName <<" ѧ���ķ���: " << ArrayT[i].ArrayS[j].score << endl;
			 
		}
	};
}

int main232313() {
	struct Teacher ArrayT[3];          //������ʦ������
	int len = sizeof(ArrayT) / sizeof(ArrayT[0]);               
	allocatespace(ArrayT, len);

	PrintFo(ArrayT, len);



	return 0;
}