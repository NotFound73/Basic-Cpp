#include <iostream>
#include <string>
#include <conio.h>
#include <cctype>
#include <algorithm>
#include <vector>
#include "word.h"
#define N 6

using namespace std;

string set_guess(string ans){
    string guess;

    cout << "-->";
    while (guess.size() < ans.size()){
        char letra = _getch();

        if (letra == 8 && guess.size() > 0){
            guess.pop_back();
            cout << "\b \b";
        }

        if(!isalpha(letra)){
            continue;
        }

        letra = toupper(letra);
        guess += letra;
        cout << letra;
    }
    cout << endl;
    return guess;
}

int main(){
    string ans;

    cout << "=============\n WORDLE \n============="  << endl;
    cout << "Set the answer: ";

     getline (cin, ans);

    for (char &c : ans){
        c = toupper(c);
    }
    
    system ("cls");

    cout << "The word is: " << ans << endl;
    system("pause");
    system("cls");

    cout << "Start guessing (the word has " << ans.size() << " characters)" << endl;
    cout << "You,ve got " << N << " attempts" << endl;

    for(int attempt = 0; attempt < N; attempt++){
        string guess = set_guess(ans);
        word temp(guess, ans);

        if (temp.is_guess_right()){
            cout << "You've won, Congratulations!!!" << endl;
            break;
        }
        else if (attempt == N){
            cout << "You've lost, What a loser!!!" << endl;
            break;
        }

        temp.attempt_guess();
        temp.get_pos();
        cout << endl;
    }
    system("pause");
    return 0;
}