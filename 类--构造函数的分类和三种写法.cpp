#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
class Person
{
public:
//default verson
    Person()
    {
        cout << "this is the start of the defaut verson: 000"<< "\n";
    }
//bracket"int and const" verson
     Person(int)
    {
        cout << "this is the start of the verson 'int': 001"<< "\n";
    }
    Person(const Person &p)
    {
        cout<<"this is the const verson of the start: 002"<<"\n";
    }

//implicit verson
    ~Person()
    {
        cout << "this is the end: 110"<< "\n";
    }
};
void test01()
{
    //first writing method
    Person p1;
    Person p2(3);
    Person p3(p1);
//second 
    Person f1;
    Person f2=Person(3);
    Person f3=Person(f1);
    //notice if the following is:
    //Person(f2)
    //  error,f2 had been defined; 
//third 
  Person g1;
  Person g2=10;
  Person g3=g1;
}

int main()
{test01();
    system("pause");
    return 0;
}
