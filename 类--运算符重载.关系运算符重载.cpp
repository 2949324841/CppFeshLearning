#include<iostream>
using namespace std;
#include<string>
class Person
{
    public:
    Person(string name,int age)
    {
        m_Name=name;
        m_Age=age;
    }



    string m_Name;
    int m_Age;
bool operator==(Person &p)
    {
    if(this->m_Age==p.m_Age&&this->m_Name==p.m_Name)
        {
            return true;
        }
        else
        {
            return false;
        }
    };
    bool operator!=(Person &p)
    {
    if(this->m_Age==p.m_Age&&this->m_Name==p.m_Name)
        {
            return false;
        }
        else
        {
            return true;
        }
    };
};

void test01()
{
    Person p1("Tom",18);
    Person p2("Tom",18);
    Person p3("Jerry",20);
    if(p1==p2)
    {
        cout<<"it`s the same person1"<<endl;
    }
    else
    {
        cout<<"it`s not the same person1"<<endl;
    }

    if(p2!=p3)
    {
        cout<<"it`s not the same person2"<<endl;
    }
    else
    {
        cout<<"it`s the same person2"<<endl;
    }
}
int main()
{
    test01();
    system("pause");
     return 0;
}