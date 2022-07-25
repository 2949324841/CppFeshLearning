#include<iostream>
using namespace std;

struct hero {

	string name;
	int age;
	string sex;
};


void bubblesort(struct hero Arrayhero[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (Arrayhero[j].age < Arrayhero[j + 1].age)
			{
				int temp = Arrayhero[j].age;
				Arrayhero[j].age = Arrayhero[j + 1].age;
				Arrayhero[j + 1].age = temp;
			}
		}
	}


};

void Print2(hero Arrayhero[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "姓名: " << Arrayhero[i].name << " 年龄: " << Arrayhero[i].age << " 性别: " << Arrayhero[i].sex << endl;
	};
};



int main() 
{

	struct hero Arrayhero[5] = {

		{"张三",20,"男"},
		{"李四",18,"男"},
		{"王五",34,"男"},
		{"莉莉",27,"女"},
		{"熊二",67,"男"}

	};
	int len = sizeof(Arrayhero) / sizeof(Arrayhero[0]);
	bubblesort(Arrayhero, len);
	Print2(Arrayhero, len);






	return 0;
}