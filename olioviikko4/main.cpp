#include <iostream>
#include "pankkitili.h"
#include "luottotili.h"
#include "asiakas.h"

using namespace std;

int main()
{
    Asiakas tili("Joni",1000);

    tili.showSaldo();
    cout<<endl;
    tili.talletus(200);
    tili.luotonNosto(500);
    tili.showSaldo();
    cout<<endl;

    Asiakas tili2("Mari",2000);
    tili2.showSaldo();
    cout<<endl;

    tili.tiliSiirto(80,tili2);
    cout<<tili.getNimi()<<":"<<endl;
    tili.showSaldo();
    cout<<tili2.getNimi()<<":"<<endl;
    tili2.showSaldo();

    return 0;
}
