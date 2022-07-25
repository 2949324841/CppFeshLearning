#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
class Person
{
public:
    Person()
    {
        cout << "this is the start.. " << endl;
    }
    ~Person()
    {
        cout << "this is the end.." << endl;
    }

    void test02()
    {
        cout<<"helloworld"<<"\n";
    }
};
void test1()
{
Person p1;
p1.test02();
}

int main()
{
test1();
    system("pause");
    return 0;
}
