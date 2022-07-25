#include<iostream>
#include<string>
using namespace std;

class Person
{
public:
        static int m_A;//静态成员变量必须类内申明,类外初始化,且为全局共享.

private:
        static int m_B;
};
int Person::m_A=100;
int Person::m_B=200;

void test01()
{
    cout<<"m_A: "<<Person::m_A<<endl;
    //cout<<"m_B: "<<Person::m_B<<endl;此行报错,m_B为私有,无法访问;
}
void test02()
{
    Person p2;
    p2.m_A=3000;//此为另一个调用Person类的对象p2;
}
int main()
{
test01();
test02();
test01();//m_A变为3000,全局都将变化;
system("pause");
return 0;
}