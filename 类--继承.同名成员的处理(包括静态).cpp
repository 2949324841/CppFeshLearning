#include<iostream>
using namespace std;

class Base
{   
    public:
    Base()
    {
        m_A=100;
    }
    int m_A;
};

class Son1:public Base
{
    public:
    Son1()
    {
    m_A=200;
    }
    int m_A;
};

class Base2
{
public:

static int m_B;
};
int Base2::m_B=1001;
class Son2:public Base2
{
    public:
   static int m_B;
};
int Son2::m_B=2001;

void test01()
{
    Son1 s1;
    cout<<"s1.m_A= "<<s1.m_A<<endl;
    cout<<"Base.m_A= "<<s1.Base::m_A<<endl;
}

void test02()
{
    Son2 s2;
    cout<<"s2.m_B= "<<s2.m_B<<endl;
    cout<<"Base2.m_B= "<<s2.Base2::m_B<<endl;
}
int main()
{
    test01();
    test02();
    system("pause");
    return 0;
}