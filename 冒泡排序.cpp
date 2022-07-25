#include<iostream>
using namespace std;

int main78372897() {
	int arr[9] = { 1, 4, 7, 2, 5, 8, 3, 6, 9 };//输入需要排序的数组;
	cout << "排序前: " << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;//输出排序前的数组
	for (int i = 0; i < 9; i++) {                           //外层循环,使循环9次,从零开始;
		for (int j = 0; j < 9 - i - 1; j++)                 //内层循环,使相邻数组进行比较 (即arr[0]:arr[1],arr[1]:arr[2]...一直到arr[7]:arr[8],将最大位送到arr[8]即最后位)  
		{                                                   //j为每次循环所需要的比较次数:每次循环需要的次数=外层总共需要循环的次数-该次为第几次循环(i)-1
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];                        //此块为交换赋值的算法;
				arr[j + 1] = temp;
			}
		}
	}

	cout << "排序后: " << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}