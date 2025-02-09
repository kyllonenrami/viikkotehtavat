#include "notifikaattori.h"

Notifikaattori::Notifikaattori() {

    cout<<"Luodaan Notifikaattori"<<endl;
}

void Notifikaattori::lisaa(Seuraaja *s)
{
    if(seuraajat == nullptr){
        seuraajat = s;
        cout<<"Notifikaattori lisaa seuraajan "<<s->getNimi()<<endl;
        return;
    }
    s->next = seuraajat;
    seuraajat = s;

    cout<<"Notifikaattori lisaa seuraajan "<<s->getNimi()<<endl;
}

void Notifikaattori::poista(Seuraaja *l)
{
    Seuraaja *ptr = seuraajat;

    if(ptr== nullptr){
        cout<<"Ei poistettavaa listalla"<<endl;
        return;
    }
    while(ptr->next != nullptr){
        if(ptr->next==l){
         ptr->next = ptr->next->next;
        }
        ptr =ptr->next;
        cout<<"Notifikaattori poistaa seuraajan "<<l->getNimi()<<endl;
    }
}


void Notifikaattori::tulosta()
{
    cout<<"Notifikaattorin seuraajat:"<<endl;
    Seuraaja *ptr = seuraajat; //tehtiin loop muuttuja ja alustettiin se listan alkuun
    while (ptr->next != nullptr){
        cout<<"Seuraaja "<<ptr->getNimi()<<endl;
        ptr= ptr->next;
    }
    cout<<"Seuraaja "<<ptr->getNimi()<<endl;
}

void Notifikaattori::postita(string k)
{

    cout<<"Notifikaattori postaa viestin "<<k<<endl;

    Seuraaja *ptr = seuraajat; //tehtiin loop muuttuja ja alustettiin se listan alkuun
    while (ptr->next != nullptr){
        cout<<"Seuraaja "<<ptr->getNimi()<<" sai viestin "<<k<<endl;
        ptr= ptr->next;
    }
    cout<<"Seuraaja "<<ptr->getNimi()<<" sai viestin "<<k<<endl;
}
