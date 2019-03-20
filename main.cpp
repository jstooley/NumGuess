#include <iostream>

using namespace std;



int main() {

    int secrectNum = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    bool outOfGuesses = false;

    do{
        if (guessCount < guessLimit){
            cout << "What's your guess?" << endl;
            cin >> guess;
            guessCount ++;
        }else{
            outOfGuesses = true;
        }
    }while(secrectNum != guess && !outOfGuesses);

    if (!outOfGuesses){
        cout << "You win!" << endl;
    }else{
        cout << "You've run out of guesses";
    }


    return 0;
}

