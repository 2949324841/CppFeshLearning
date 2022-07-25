#include<iostream>
#include<string>
using namespace std;
//全局函数作友元
class Building
{ friend void GoodGay(Building &building);

  public:
  string m_SittingRoom="sittingroom";
  private:
  string m_BedRoom="bedroom";
};

void GoodGay(Building &building)
{
  cout<<"your friend is visiting :"<<building.m_SittingRoom<<endl;
  cout<<"your friend is visiting :"<<building.m_BedRoom<<endl;
}

int main()
{
Building building;
GoodGay(building);

  system("pause");
  return 0;
}