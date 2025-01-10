#include <iostream>
#include <cstdlib>
#include <ctime>
int game(int maxnum);
using namespace std;

int main()
{
    int maxnum;
    int lkm=game(maxnum);
    cout << "Arvausten lukumaara:" << lkm << endl;

    return 0;
}
int game(int maxnum){
        srand(time(NULL));

        cout << "Anna pelin suurin mahdollinen luku (Luku ei voi olla nolla)"<<endl;
        cin >> maxnum;

        int randomNum = rand() % maxnum + 1;
        //cout <<"Arvottu luku:" << randomNum << endl;
        int guessNum;
        int calcNum = 0;

        while (guessNum != randomNum ) {
            cout << "Arvaa oikea luku!" << endl;
            cin >> guessNum;
            calcNum++;

            if(guessNum < randomNum){
                cout <<"Arvottu luku on suurempi!"<< endl;
            }

            else if( guessNum > randomNum){
                cout <<"Arvottu luku on pienempi!"<< endl;
            }

            else if(guessNum == randomNum){
                cout <<"Oikea vastaus!"<< endl;
            }


    }
    return calcNum;
}
