#include<iostream>
using namespace std;

struct Student {

	string sName;

	int score;             //学生结构体
};

struct Teacher {

	string tName;
	                                 //老师结构体
	struct Student sArray[5];

};

void allocatespace1(struct Teacher tArray[], int len) {
	string nameseed = "ABCDE";
	for (int i = 0; i < len; i++) {

		tArray[i].tName = "teacher_";
		tArray[i].tName += nameseed[i];
		for (int j = 0; j < 5; j++) {

			tArray[i].sArray[j].sName = "student_";                //命名
			tArray[i].sArray[j].sName += nameseed[j];
			tArray[i].sArray[j].score = 60;
		};
	};

};

void PrintFo2(Teacher tArray[], int len) {

	for (int i = 0; i < len; i++) {

		cout << "老师的姓名: " << tArray[i].tName << endl;
		for (int j = 0; j < 5; j++)
		{
			cout << "学生的姓名: " << tArray[i].sArray[j].sName << "学生的分数: " << tArray[i].sArray[j].score << endl;
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