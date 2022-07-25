#include<iostream>
#include<string>
using namespace std;
class Building;//前置申明
class GoodGay
{   public:
GoodGay();
    public:
  void visit();
  void visit02();
  Building *building;
};
class Building
{friend void GoodGay::visit();
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


GoodGay::GoodGay()
{
 building = new Building;
};
void GoodGay::visit()
{
cout<<"goodgay is visiting: "<<building->m_Sittingroom<<endl;
cout<<"goodgay is visiting: "<<building->m_Bedroom<<endl;
}
void GoodGay::visit02()
{
cout<<"goodgay2 is visiting: "<<building->m_Sittingroom<<endl;

}
void test01()
{
  GoodGay gg;
  gg.visit();
  gg.visit02();
}
int main()
{
test01();
  system("pause");
  return 0;
}