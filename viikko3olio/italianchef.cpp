#include "italianchef.h"

ItalianChef::ItalianChef(string name): Chef(name) {
    cout<<"ItalianChef "<<chefName<<" konstruktori"<<endl;
}

ItalianChef::~ItalianChef()
{
    cout<<"ItalianChef "<<chefName<<" destruktori"<<endl;
}

bool ItalianChef::askSecret(string pword, int flour, int water)
{

    cin>>pword;
    if(password.compare(pword)==0){
        cout<<"Password is correct"<<endl;
        makepizza(flour, water);
        return true;
    }
    else{
        cout<<"Wrong password"<<endl;
        return false;
    }
}

int ItalianChef::makepizza(int flour, int water)
{
    int makePizza = flour/5 & water/5;
    cout<<chefName<<" with "<<flour<<" flour and "<<water<<" water can make "<<makePizza<<" pizzas"<<endl;
}
