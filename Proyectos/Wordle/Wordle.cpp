#include <iostream>
#include <string>
#include <conio.h>
#include <cctype>
#include <algorithm>
#define N 6
using namespace std;

string set_temp (string ans){
    string temp;

    while(temp.size() < ans.size()){
        char letra = _getch();

        if (letra == 8 && temp.size() > 0){
            temp.pop_back();
            cout << "\b \b";
        }

        if(!isalpha(letra)){
            continue;
        }

        letra = toupper(letra);
        temp += letra;
        cout << letra;
    }
    cout << endl;
    return temp;
}

bool is_word_right(string ans, string temp){
    return (ans == temp);
}

int check_letter(string ans, string temp, int i, bool isused[]){
    if (ans.at(i) == temp.at(i)){
        isused[i] = true;
        return 1;
    }
    else{
        return 0;
    }
}

void double_check(int pos[], string ans, string temp, bool isused[]){
    for (int i=0; i<ans.size(); i++){
        if (pos[i] == 1){
            continue;
        }

        for(int j=0; j<ans.size(); j++){
            if(!isused[j] && ans[j] == temp[i]){
                pos[i] = 2;
                isused[j] = true;
                break;
            }
        }
    }
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

    for (int x=0; x < N; x++){
        cout << "-->";

        string temp = set_temp(ans);
        
        if (is_word_right(ans, temp)){
            cout << "You've won, Congratulations!!!" << endl;
            break;
        }

        else {
            int pos[ans.size()];
            bool isused[ans.size()] = {};

            cout << "p->";
            for (int p=0; p < ans.size(); p++){
                pos[p] = check_letter(ans, temp, p, isused);
            }
            double_check(pos, ans, temp, isused);

            for (int p=0; p < ans.size(); p++){
                cout << pos[p];
            }
            cout << endl;
            
            if (x == N-1){
                cout << "You've lost, What a loser!!!" << endl;
            }
        }    
    }
    system("pause");
    return 0;
}