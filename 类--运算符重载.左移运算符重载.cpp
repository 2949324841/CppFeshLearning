#include<iostream>
#include<ostream>
#include<string.h>
using namespace std;
class Person
{
  public:
  friend ostream &operator<<(ostream &out,Person &p);//cout属于ostream类,此处out作为cout的别名(&);
  Person(int a,int b)
  {
    m_A=a;
    m_B=b;
  }
  private:
  int m_A;
  int m_B;
};

ostream &operator<<(ostream &out,Person &p)//只有全局函数才能重载"<<";因为成员函数效果为p<<cout,与预期相反;此处用ostream &operator是因为链式编程需要返回cout的别名,返回值应当也是别名;
{
  out<<"p.m_A= "<<p.m_A<<" p.m_B= "<<p.m_B;
  return out;//链式编程思想
}

void test01()
{
  Person p1(10,20);
  cout<<p1<<" "<<"helloworld!"<<endl;//链式编程思想
}

int main()
{
test01();
system("pause");
  return 0;
}