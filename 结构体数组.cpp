#include<iostream>
using namespace std;

struct student {

	string name;
	int age;
	int score;

};

int main367281738() {

	struct student arr[3]{

		{"张三",18,100},
		{"李四",17,90},
		{"王五",19,99}
	};
	arr[2].name = "赵六";
	arr[2].age = 45;
	arr[2].score = 97;

	for (int i = 0; i < 3; i++) {

		cout << "name: " << arr[i].name << " age: " << arr[i].age << " score: " << arr[i].score << endl;
	}






	return 0;
}