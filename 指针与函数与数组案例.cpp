#include<iostream>
using namespace std;

void bubblesort(int* arr,int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp;
				temp = arr[j+1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}

}

void printfarray(int* arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
}
}



int main67382617863() {


	int arr[] = { 2,4,5,6,1,7,8,0,9 };
	int len = sizeof(arr) / sizeof(arr[0]);

	bubblesort(arr, len);

	printfarray(arr, len);







	return 0;
}