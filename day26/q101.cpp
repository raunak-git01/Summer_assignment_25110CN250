//prog to create no guessing game
#include <iostream>
using namespace std;
int main() {
    int secret = 25;
    int guess;
    cout<<"Guess the number: ";
    while (true){
        cin>>guess;
        if (guess==secret) {
            cout<<"Correct! You guessed the number.";
            break;
        }
        else if (guess<secret)
            cout<<"Too low! Guess again: ";
        else
            cout<<"Too high! Guess again: ";
    }
    return 0;
}