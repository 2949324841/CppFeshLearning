#include<iostream>
using namespace std;

class Person1
{

public:

};

class Person2
{

    public:

    int m_A;                //非静态成员变量 属于类的对象上;
    static int m_B;        //静态成员变量  不属于类的对象上;
    void Person3();         //非静态成员函数  不属于类的对象上;
    static void Person4();  //静态成员函数   不属于类的对象上;
};

int Person2::m_B=0;
void Person3();
void Person2::Person4()
{
    cout<<endl;
}
void test01()
{
    Person1 p1;
    cout<<"size of p1: "<<sizeof(p1)<<endl;//空对象 在c++编译器上空对象也会被分配一个字节的空间,用以区分空对象占用内存的位置;
}
void test02()
{
    Person2 p2;
    cout<<"size of p2: "<<sizeof(p2)<<endl;
}

int main()
{
test01();
test02();

    system("pause");
    return 0;
}