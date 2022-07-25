#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

class Person
{
    public:

    Person()
    {
        cout<<"00 1:"<<"\n";
    }
    Person(int age,int height)
    {   m_age=age;
        m_height=new int(height);
        cout<<"00 2:"<<"\n";
    }
    Person(const Person &p)
    {
        cout<<"00 3:"<<"\n";
         m_age=p.m_age;  
        // m_height=p.m_height;编译器自己写的默认拷贝函数内容;
        //用深拷贝解决两次释放new的问题
        m_height=new int (*p.m_height);
    }
    ~Person()
    {   if(m_height!=NULL)//清除,但有两次清除行为,第二次行为将被视为非法(已经被释放过一次)
        {
            delete m_height;
            m_height=NULL;
        }   
        cout<<"00 0:"<<"\n";
    }

int m_age;
int *m_height;
};

void test01()
{
    Person p1(16,180);
    Person p2(p1);
    cout<<p1.m_age<<" "<<p2.m_age<<endl; 
    cout<<*p1.m_height<<" "<<*p2.m_height<<endl;
}

int main()
{
test01();
    system("pause");
    return 0;
}