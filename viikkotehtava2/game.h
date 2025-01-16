#ifndef GAME_H
#define GAME_H
#include <iostream>

using namespace std;

class game{

private:
    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses;
    void printGameResult();


public:
    game(int);
    ~game();
    void play();

};

#endif // GAME_H
