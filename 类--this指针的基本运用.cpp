#include<iostream>
#include<string>
using namespace std;

class Person
{
    public:

    Person(int age)
    {   
        this->age=age;//当形参与成员变量重名时,可用this 指针 来区分
    }
    int age;
Person& PersonAdd(Person &p)
{
    this->age+=p.age;
    return *this;//this是指向传入引用原型的类的指针,而*this即是对象本身;
}
 
};

int test01()
{   
    Person p1(10);
    Person p2(10);
p2.PersonAdd(p1).PersonAdd(p1).PersonAdd(p1);
cout<<"p2.age= "<<p2.age<<endl;
   return 0; 
}

int main()
{
    test01();
    system("pause");
    return 0;
}