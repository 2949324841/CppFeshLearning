#include<iostream>
#include<string>
using namespace std;
//类作友元
class Building
{friend class GoodGay;//***
   public:
Building();
  public:
  string m_Sittingroom;
  private:
  string m_Bedroom;
};
Building::Building()
{
 m_Sittingroom="sittingroom";
 m_Bedroom="bedroom";
};
class GoodGay
{   public:
GoodGay();
    public:
  void visit();
  Building *building;
};

GoodGay::GoodGay()
{
 building = new Building;//new 开辟空间
};
void GoodGay::visit()
{
cout<<"goodgay is visiting: "<<building->m_Sittingroom<<endl;
cout<<"goodgay is visiting: "<<building->m_Bedroom<<endl;
}

void test01()
{
  GoodGay gg;
  gg.visit();
}
int main()
{
test01();
  system("pause");
  return 0;
}