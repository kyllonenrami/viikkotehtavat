#include "asiakas.h"

Asiakas::Asiakas(string nimi, double lr) : kayttotili(nimi), luottotili(nimi,lr)
{
    cout<<"Luotiin pankkitili "<<nimi<<"lle"<<endl;
    cout<<"Luotiin luottotili "<<nimi<<"lle, luottoraja "<<lr<< " euroa"<<endl;
    cout<<"Luotiin asiakkuus "<<nimi<<"lle"<<endl;
}

string Asiakas::getNimi()
{
    return nimi;
}

void Asiakas::showSaldo()
{
    cout<<"Tilin saldo on "<<kayttotili.getBalance()<<endl;
    cout<<"Luottotilin saldo on "<<luottotili.getBalance()<<endl<<endl;
}

bool Asiakas::talletus(double summa)
{
    if(summa > 0){
        kayttotili.deposit(summa);
        return true;
    }
    else{
        cout<<"Talletus epaonnistui"<<endl;
        return false;
    }
}


bool Asiakas::nosto(double summa2)
{
    kayttotili.withdraw(summa2);
    return true;

}

bool Asiakas::luotonMaksu(double summa3)
{
   luottotili.deposit(summa3);
    return true;
}

bool Asiakas::luotonNosto(double summa4)
{
    luottotili.withdraw(summa4);
    return true;
}

bool Asiakas::tiliSiirto(double siirrettavaR, Asiakas &toinenA)
{
    if(siirrettavaR > 0 && siirrettavaR <= kayttotili.getBalance()){

        cout<<getNimi()<<" siirtaa "<<siirrettavaR<<" euroa "<<toinenA.getNimi()<<"n tilille"<<endl;
        kayttotili.withdraw(siirrettavaR);
        toinenA.kayttotili.deposit(siirrettavaR);
        return true;
        }

    else{
        cout<<"Tilisiirto epaonnistui"<<endl;
                return false;
        }



}
