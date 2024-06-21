//  Making random number generator game
#include <iostream>
#include<ctime>
#include <cstdlib>
using namespace std;

// creating random number
int randomNumber(){
    srand(time(0));
    int random = rand() % 100;
    return random;
}

int main(){
    cout << endl << endl;
    cout << "\t\tWelcome to the random number guessing game" << endl;
    cout << endl << "\tYou have 10 chances to guess a number between 0 to 100" << endl;
    cout << endl;

    //calling random number
    int num = randomNumber();
    int chances = 10;
    
    int guess;
    for(int i = 0; i < 10; i++){
        cout << "\t\tGuess a number between 0 and 100 :- ";
        cin >> guess;

        if(guess >= 0 && guess <= 100){
            if(guess == num){
                cout << endl;
                cout << "\t\tCongrats your guess is correct\n\t\t\tYou win";
                break;
            }
            else if(guess > num){
                cout << endl;
                cout << "\t\t\t Oh! Your guess is wrong" << endl;
                cout << endl;
                cout << "\t\tnumber is lower than your guess" << endl;
                cout << endl;
                chances--;
                cout << "\t\t\tYou have " << chances <<" " << "left" <<  endl << endl;
            }
            else if(guess < num){
                cout << endl;
                cout << "\t\t\t Oh! Your guess is wrong" << endl;
                cout << endl;
                cout << "\t\tnumber is higher than your guess" << endl;
                cout << endl;
                chances--;
                cout << "\t\t\tYou have " << chances <<" " << "left" <<  endl << endl;
            }
        }else{
            cout << endl;
            cout << "\t\tYour guess must be between 0 and 100" << endl;
            cout << endl;
            cout << "\t\t\t\tGame Over" << endl;
            break;
        }
    }

    if(chances == 0 && guess != num){
        cout << endl;
        cout << "\t\tYou could not guess the number " << endl;
        cout << endl;
        cout << "\t\t\t\tGame Over" << endl;
    }

    return 0;
}