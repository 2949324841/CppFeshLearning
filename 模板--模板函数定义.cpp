#include<iostream>
using namespace std;
template<class T>
void swapnum(T a, T b)//模板函数
{
    T temp=a;
    a=b;
    b=temp;
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;
}

int main()
{int a=10,b=20;//自动检测
   swapnum(a,b);
   swapnum<int>(a,b);//指定类型
    system("pause");
    return 0;
}