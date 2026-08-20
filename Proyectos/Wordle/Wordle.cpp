#include <iostream>
#include <string>
#include <conio.h>
#include <cctype>
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
    if (ans == temp){
        return true;
    }
    else {
        return false;
    }
}

int check_letters(string ans, string temp, int i){
        if (ans.at(i) == temp.at(i)){
            return 1;
        }
        else{
            if (ans.find(temp.at(i)) == string :: npos){
                return 0;
            }
            else {
                int count1 = 0, count2 = 0;
                for (char letra : ans){
                    if (temp.at(i) == letra)
                    count1 ++;
                }
                for (int j=0; j <= i; j++){
                    if (temp.at(i) == temp.at(j)){
                        count2 ++;
                    }
                }
                if (count1 == count2){
                    return 2;
                }
                else{
                    return 0;
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
    cout << "You,ve got" << N << "attempts" << endl;

    for (int x=0; x < N; x++){
        cout << "-->";

        string temp = set_temp(ans);
        
        if (is_word_right(ans, temp)){
            cout << "You've won, Congratulations!!!" << endl;
            break;
        }
        else {
            int pos[ans.size()];

            cout << "p->";
            for (int p=0; p < ans.size(); p++){
                pos[p] = check_letters(ans, temp, p);
            }
            for (int p=0; p < ans.size(); p++){
                cout << pos[p];
            }
            cout << endl;

        if (x == N-1){
            cout << "You've lost, What a chud!!!" << endl;
        }
    }
}
    system("pause");
    return 0;
}