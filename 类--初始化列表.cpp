#include <iostream>
#include <string>
using namespace std;

//初始化列表
class Person
{
    public:

    //传统的赋初值方法
    // Person(int a,int b,int c)
    // {
    //     m_A=a;
    //     m_B=b;
    //     m_C=c;
    // }
        Person(int a ,int b,int c):m_A(a),m_B(b),m_C(c)
        {

        };
        int m_A;
        int m_B;
        int m_C;
};


void test01()
{
    Person p1(10,20,30);
    cout<<"m_A= "<<p1.m_A<<endl;
    cout<<"m_B= "<<p1.m_B<<endl;
    cout<<"m_C= "<<p1.m_C<<endl;
}

int main()
{
    test01();
    system("pause");
    return 0;
}