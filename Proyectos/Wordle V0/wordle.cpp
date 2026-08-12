#include <iostream>
#include <string>
#include "word.h"
#define N 5
using namespace std;

void set_word(string *ansf, int *sizef){
    getline(cin, *ansf);
    *sizef = (*ansf).length();
    system("cls");
}

void set_temp(string *tempf){
    cout << endl << "->";
    getline (cin, *tempf);
}

int main(){
    string* ans = new string;
    int* size = new int;

    cout << "=============\n WORDLE \n============="  << endl;
    cout << "Set the answer: ";
    set_word(ans, size);

    word WORD(*ans, *size);
    delete ans;
    ans = nullptr;
    
    cout << "Start guessing (the word has " << *size << " characters)" << endl;

    cout << "You,ve got 5 attempts" << endl;

    int attempts = 0;
    do {
        string* temp = new string;
        set_temp(temp);

        for (int i=0; i < *size; i++){
            WORD.attempt_word(*temp, i);
        }
        attempts++;

        if (WORD.is_correct(*temp) == true){
            cout << "\nCongratulations!!!" << endl;
            system ("pause");
            break;
            delete temp;
        }

        if (attempts == N){
            cout << "\nYOU HAVE LOST" << endl;
            cout << "The word was";
            WORD.get_word();
            system ("pause");
            delete temp;
        }

    } while (attempts < N);

    delete size;
    size = nullptr;
}
    