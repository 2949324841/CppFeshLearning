#include <iostream>
#include <string>
using namespace std;

//类对象作为类成员//先有最内层class成员的构造,再依次向外;

class Phone
{
public:
    Phone(string m_Pname):Pname(m_Pname)
    {
       cout<<"this is the 'PHONE'"<<endl;
    }
~Phone()
{
    cout<<"this is the 'PHONEEND'"<<endl;
}
string Pname;

};

class Person
{
    public:
    Person(string m_Pername,string m_Pname):Pername(m_Pername),m_Phone(m_Pname)//== Phone m_Phone(m_Pname)隐式转换法,调用有参构造;
    {
    cout<<"this is the 'PERSON'"<<endl;
    }
    ~Person()
    {   
        cout<<Pername<<" "<<m_Phone.Pname<<endl;
        cout<<"this is the 'PERSONEND'"<<endl;
    }
Phone m_Phone;
string Pername;
};


void test01()
{
    Person p1 ("ZhangSan","HuaWei");
}

int main()
{
    test01();
    system("pause");
    return 0;
}