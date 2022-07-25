#include<iostream>
using namespace std;
//继承 语法:     class 子类: 继承方式 父类
//子类 又称为 派生类, 父类 又称为 基类
//继承的好处,减少重复代码
class BaseCont
{
  public:
void Jian()
{
  cout<<"---------------------"<<endl;
}
  void title()
  {
    cout<<"this is the title: "<<endl;
  }
  void head()
  {
    cout<<"this is the head: "<<endl;
  }
  void body()
  {
    cout<<"this is the body: "<<endl;
  }
};

class JAVA: public BaseCont
{
  public:
  void content()
  {
    cout<<"this is the JAVA connect"<<endl;
  }
};
class CPP: public BaseCont
{
  public:
  void content()
  {
    cout<<"this is the CPP connect"<<endl;
  }
};
class Python: public BaseCont
{
  public:
  void content()
  {
    cout<<"this is the Python connect"<<endl;
  }
};

void test01()
{
  JAVA ja;
  CPP cpp;
  Python py;
ja.Jian();
  ja.title();
  ja.head();
  ja.body();
  ja.content();
cpp.Jian();
  cpp.title();
  cpp.head();
  cpp.body();
  cpp.content();
py.Jian();
  py.title();
  py.head();
  py.body();
  py.content();
}
int main()
{
  test01();
  system("pause");
  return 0;
}
