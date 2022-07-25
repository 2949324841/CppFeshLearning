#include<iostream>
using namespace std;
#include<string>
class Print_0
{
    public:
    void operator()(string name)   //使用方式与函数相似,所以称为仿函数;
    {
        cout<<name<<endl;
    }
};

class MyAdd
{
    public:
    int operator()(int num1,int num2)
    {
        return num1+num2;
    }
};
void test01()
{
    Print_0()("Tom and Jerry");//匿名函数对象 运行完即释放;原为 Print_0 MyPrint;  MyPrint("Tom and Jerry");
}
void test02()
{
    cout<<MyAdd()(100,200)<<endl;
}
int main()
{
    test01();
    test02();
    system("pause");
    return 0;
}