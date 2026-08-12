#include <iostream>
#include <string>
#include "word.h"

word :: word(){
    ans = "Unknown";
    length= -1;
}

word :: word(string ans, int length){
    this -> ans = ans;
    this -> length = length;
}

void word :: attempt_word(string temp, int i){
    if (ans.at(i) == temp.at(i)){
        cout << "1";
    }
    else{
        if (ans.find(temp.at(i)) == string :: npos){
            cout << "0";
        }
        else{
            cout << "2";
        }
        
    }
}

bool word :: is_correct(string temp){
    if (ans == temp){
        return true;
    }
    else{
        return false;
    }
}

void word :: get_word(){
    cout << ans;
}
