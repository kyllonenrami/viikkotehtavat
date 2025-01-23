#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Chef kokki1("Jyrki Sukula");
    kokki1.makeSalad(12);
    kokki1.makeSoup(16);

    ItalianChef kokki2("Massimo Bottura");
    kokki2.makeSalad(9);
    kokki2.askSecret("pizza",25,25);


    return 0;
}
