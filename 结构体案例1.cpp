#include<iostream>
using namespace std;

struct Student {

	string sName;                //创建学生的结构体
	int score;

};

struct Teacher {

	string tName;                  //创建包含学生结构体的老师结构体

	struct Student ArrayS[5];

};

void allocatespace(Teacher ArrayT[], int len) {
	string nameseed = "ABCDE";                               //为每位老师及其所有的学生(姓名,分数)命名
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
		cout << "老师的名称: " << ArrayT[i].tName << endl;
		for (int j = 0; j < 5; j++) {                                             //创建关于打印的函数
			cout << "学生的名称: " << ArrayT[i].ArrayS[j].sName <<" 学生的分数: " << ArrayT[i].ArrayS[j].score << endl;
			 
		}
	};
}

int main232313() {
	struct Teacher ArrayT[3];          //创建老师的数组
	int len = sizeof(ArrayT) / sizeof(ArrayT[0]);               
	allocatespace(ArrayT, len);

	PrintFo(ArrayT, len);



	return 0;
}