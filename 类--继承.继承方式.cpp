#include<iostream>
using namespace std;
//继承方式,继承为不低于父类权限等级,若低于则升为同等级权限
class Base
{
  public:
      int m_A;
  protected:
      int m_B;
  private:
      int m_C;
};

class Son1: public Base
{
  public:
    void func1()
    {
      m_A=100;//公开
      m_B=100;//保护
      //m_C=100;成员属性为 私有.
    }
};
class Son2: protected Base
{
  public:
    void func2()
    {
      m_A=100;//保护
      m_B=100;//保护
      //m_C=100;私有
    }
};
class Son3: private Base
{
  public:
  void func3()
  {
    m_A=100; //类内可以访问
    m_B=100; //类内可以访问
   // m_C=100;私有
  }
};

class GrandSon: public Son3
{
  public:
  void func4()
  {
    // m_A=100;
    // m_B=100;都为父类son3私有属性,无法在son3外访问
    // m_C=100;
  }
};