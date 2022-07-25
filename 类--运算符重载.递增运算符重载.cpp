#include<iostream>
using namespace std;

class Intermsum
{
public:
friend ostream& operator<<(ostream& cout,Intermsum inter00);
    Intermsum()
    {
         m_term=0;
    }
    //重载前置运算符 先作加法运算,再返回运算后的值
    Intermsum& operator++()//引用传递,可以做到++(++x)的效果(链式思想)
    {
        ++m_term;
        return *this;
    }
    //重载后置运算符 先建立临时变量记录当前值,再对原值进行加法运算
    //↓ (int) 中 int 代表占位参数,可以用于区分前置和后置
    Intermsum operator++(int)  //值传递,返回值为局部变量,程序运行一次后自动回收,第二次访问为非法
    {
        Intermsum temp01=*this;
        m_term++;
        return temp01;
    }
private:
    int m_term;

};
//重载左移运算符
ostream& operator<<(ostream& cout,Intermsum inter00)
{
    cout<<inter00.m_term;
    return cout;
}

void test01()
{
    Intermsum inter01;
    Intermsum inter02;
    cout<<++(++inter01)<<endl;
    cout<<inter02++<<endl;
    cout<<inter02<<endl;
}
int main()
{
    test01();
    system("pause");
    return 0;
}