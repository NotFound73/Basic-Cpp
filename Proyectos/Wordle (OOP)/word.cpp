#include <iostream>
#include <string>
#include <conio.h>
#include <cctype>
#include <algorithm>
#include <vector>
#include "word.h"
#define N 6

using namespace std;

word :: word(){
    guess = "";
}

word :: word(string guess, string ans){
    this -> guess = guess;
    this -> ans = ans;
}

bool word :: is_guess_right(){
    return (ans == guess);
}

void word :: attempt_guess(){
    for (int j=0; j < ans.size(); j++){
        if (ans.at(j) == guess.at(j)){
            isused.push_back(true);
            pos.push_back(1);
        }
        else {
            isused.push_back(false);
            pos.push_back(0);
        }
    }

    for (int a=0; a < ans.size(); a++){
        if (pos[a] == 1){
            continue;
        }
        for (int b=0; b < ans.size(); b++){
            if (!isused[b] && ans.at(b) == guess.at(a)){
                isused[b] = true;
                pos[a] = 2;
                break;
            }
        }
    }
}

void word :: get_pos(){
    cout << "p->";
    for (int coord : pos){
        cout << coord;
    }
}