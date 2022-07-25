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
        cout << "int verson of start: "
             << "\n";
    }

    Person(int age)
    {
        cout << "int verson of start: "
             << "\n";
        m_age = age;
    }
    Person(const Person &p)
    {cout<<"copy verson of the start: "<<"\n";
        m_age = p.m_age;
    }
    ~Person()
    {
        cout << "end: " << "\n";
    }
    int m_age;
};

//1.
void test01()
{
    Person p1(20);
    Person p2(p1);
    cout<<"p2's m_age is:"<<p2.m_age<<endl;
}
//2.
void dowork(Person p)
{

}

void test02()
{
Person p;
dowork(p);//== Person p=p == ( Person p(Person p) )
}
//3.
Person dowork02()
{
    Person p2;
    cout<<(int)&p2<<endl;
    return p2;
}

void test03()
{
    Person p=dowork02();
    cout<<(int)&p<<endl;
}

int main()
{
test03();
    system("pause");
    return 0;
}