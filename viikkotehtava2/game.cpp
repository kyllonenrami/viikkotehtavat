#include "game.h"


game::game(int maxNum)
{
    srand(time(NULL));
    maxNumber=maxNum;
    randomNumber = rand() % maxNumber + 1;
    numOfGuesses = 0;

}

void game::play()
{

    while (playerGuess != randomNumber ) {
        cout << "Arvaa oikea luku valilta 1-"<<maxNumber << endl;
        cin >> playerGuess;
        numOfGuesses++;

        if(playerGuess < randomNumber){
            cout <<"Arvottu luku on suurempi!"<< endl;
        }

        else if( playerGuess > randomNumber){
            cout <<"Arvottu luku on pienempi!"<< endl;
        }

        else if(playerGuess == randomNumber){
            printGameResult();
        }

}
}

void game::printGameResult()
{
    cout<<"Oikea vastaus!"<<endl;
    cout <<"Arvottu luku: " << randomNumber << endl;
    cout<<"Arvausten lukumaara: "<<numOfGuesses<<endl;
}

game::~game()
{
    cout<<""<<endl;
}


