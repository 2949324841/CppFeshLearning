#include<iostream>
using namespace std;

class Father0
{
    public:
    Father0()
    {
        m_A=1000;
    }
    int m_A;
};

class Base1:public Father0
{
public:
    Base1()
    {
        m_A=1001;
    }
    int m_A;
};

class Base2:public Father0
{
    public:
        Base2()
        {
            m_A=2001;
        }
    int m_A;
};

class Son:virtual public Base1,virtual public Base2 //            h e r e ! !     此处理后m_A只存在一份;
{
    public:
    Son()
    {
        m_A=3000;
    }
    int m_A;
};

void test01()
{
    Son sl;
    cout<<sl.m_A<<endl;
}


int main()
{
    test01();
    system("pause");
    return 0;
}