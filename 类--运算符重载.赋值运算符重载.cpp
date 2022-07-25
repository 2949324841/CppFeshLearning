#include<iostream>
using namespace std;

class Person
{
public:
    Person(int age)
    {
        m_Age= new int(age);
    }
int *m_Age;
~Person()
{
    if(m_Age!=NULL)
    {
        delete m_Age;
        m_Age=NULL;
    }
}
Person& operator=(Person &p)
{   if(m_Age!=NULL)
{
    delete m_Age;
    m_Age=NULL;
}
 m_Age= new int(*p.m_Age);//深拷贝,将指针解引再分配空间,避免重复释放.
    return *this;
}
};


void test01()
{
    Person p1(10);
    Person p2(20);
    Person p3(30);
    p3=p2=p1;
    cout<<"p1.age= "<<*p1.m_Age<<endl;
     cout<<"p2.age= "<<*p2.m_Age<<endl;
      cout<<"p3.age= "<<*p3.m_Age<<endl;
}
int main()
{
 test01();
    system("pause");
    return 0;
}