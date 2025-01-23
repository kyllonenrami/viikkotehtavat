#include "chef.h"

Chef::Chef(string name) {
    chefName = name;
    cout<<"Chef "<<chefName<<" konstruktori"<<endl;
}

Chef::~Chef()
{
    cout<<"Chef"<<chefName<<" destruktori"<<endl;
}

string Chef::getName()
{

}

int Chef::makeSalad(int ingredients)
{
    int saladPortions = ingredients / 5;
    cout<<chefName <<" with "<<ingredients <<" items can make salad "<<saladPortions <<" portions!"<<endl;
}

int Chef::makeSoup(int ingredients)
{
    int soupPortions = ingredients / 3;
     cout<<chefName <<" with "<<ingredients <<" items can make soup "<<soupPortions <<" portions!"<<endl;
}
