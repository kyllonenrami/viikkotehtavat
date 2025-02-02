#include "luottotili.h"

Luottotili::Luottotili(string name, double lr) : Pankkitili(name)
{
    luottoRaja = lr;
}

bool Luottotili::deposit(double velanmaksu)
{
    double valisaldo = saldo + velanmaksu;
    if(valisaldo < 0){
        cout<<"Luottotili: Maksetaan luottotilin velkoja "<<velanmaksu<<" euroa"<<endl;
        saldo = valisaldo;
        return true;

    }
    else{
        cout<<"Luoton maksu epaonnistui"<<endl;
    }
}

bool Luottotili::withdraw(double nosto2)
{
    double valisaldo = saldo - nosto2;

    if(valisaldo >= -luottoRaja){
        cout<<"Luottotili: Nostetaan luottotililta "<<nosto2<<" euroa"<<endl;
        saldo = valisaldo;
        return true;
    }
    else{
        cout<<"Nosto epaonnistui"<<endl;
        return false;
    }
}
