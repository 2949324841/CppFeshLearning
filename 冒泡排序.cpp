#include<iostream>
using namespace std;

int main78372897() {
	int arr[9] = { 1, 4, 7, 2, 5, 8, 3, 6, 9 };//������Ҫ���������;
	cout << "����ǰ: " << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;//�������ǰ������
	for (int i = 0; i < 9; i++) {                           //���ѭ��,ʹѭ��9��,���㿪ʼ;
		for (int j = 0; j < 9 - i - 1; j++)                 //�ڲ�ѭ��,ʹ����������бȽ� (��arr[0]:arr[1],arr[1]:arr[2]...һֱ��arr[7]:arr[8],�����λ�͵�arr[8]�����λ)  
		{                                                   //jΪÿ��ѭ������Ҫ�ıȽϴ���:ÿ��ѭ����Ҫ�Ĵ���=����ܹ���Ҫѭ���Ĵ���-�ô�Ϊ�ڼ���ѭ��(i)-1
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];                        //�˿�Ϊ������ֵ���㷨;
				arr[j + 1] = temp;
			}
		}
	}

	cout << "�����: " << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}