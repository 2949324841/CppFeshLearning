#include <iostream>
#include <string>
using namespace std;

//类对象作为类成员//先有最内层class成员的构造,再依次向外;

class Person
{
public:
        static void func()
        {
            cout<<"this is a version of static function"<<endl;
        }

};

void test01()
{
    // Person p1;//1.通过对象去访问静态函数
    // p1.func();
    Person::func();//直接通过类名去访问,不单独属于此类下的任何对象,是公有的.
}


int main()
{
   test01();
    system("pause");
    return 0;
}