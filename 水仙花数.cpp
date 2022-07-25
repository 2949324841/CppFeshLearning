#include<iostream>
using namespace std;
int main36782178() {

	for (int i = 100; i < 1000; i++) {
		int b = (i / 100 );
		int c = (i / 10 % 10) ;
		int d = (i % 10);
		
		if (i == pow(b, 3) + pow(c, 3) + pow(d, 3))
		{
			cout << i << endl;
		}

	}

	return 0;

}