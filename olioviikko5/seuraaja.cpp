#include "seuraaja.h"

Seuraaja::Seuraaja(string n) {

    nimi = n;
    cout<<"Luodaan seuraaja "<<nimi<<endl;
}


string Seuraaja::getNimi()
{
    return nimi;
}

void Seuraaja::paivitys(string saaja)
{
    cout<<"Seuraaja "<<saaja<<endl;
}
