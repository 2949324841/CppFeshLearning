#include<iostream>
using namespace std;
//利用开发人员命令提示工具查看对象模型
//跳转盘符:   盘符名:
//跳转文件路径:  cd: 具体路径
//  cl \d1 reportSingleClassLayout类名 文件名
class Base
{
  public:
  int m_A;
  protected:
  int m_B;
  private:
  int m_C;
};

class Son:public Base
{
  public:
  int m_D;
};

void test01()
{
  cout<<"sizeof son is:"<<sizeof(Son)<<endl;//16
}
int main()
{
  test01();
  system("pause");    
  return 0;
}
//以下为运行结果
// test02.cpp
// test02.cpp(1): warning C4819: 该文件包含不能在当前代码页(936)中表示的字符。请将该文件保存为 Unicode 格式以防止数据丢失

// class Son       size(16):
//         +---
//  0      | +--- (base class Base)
//  0      | | m_A
//  4      | | m_B
//  8      | | m_C
//         | +---
// 12      | m_D
//         +---