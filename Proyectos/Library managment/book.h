#ifndef BOOK_H
#define BOOK_H
#include <iostream>
using namespace std;

class book{
     private:
    string title;
    string author;
    int state;

    public:
    book(){
        title = "Unknown";
        author = "Unknown";
        state = 2;
    }

    book(string title, string author){
        this -> title = title;
        this -> author = author;
        state = 1;
    }

    void get_book(int i){
         cout <<"\nBook Num. " << i+1 << endl;
         cout << "Title: " << title << endl; 
         cout << "Author: " << author << endl;
         switch (state){
            case 0: cout << "State: rented";
            break;
            case 1: cout << "State: available";
            break;
            case 2: cout << "Inexistent book";
            break;
            default: cout << "ERROR";
         }
         cout << endl;
    }

    void change_book_state(){
        if (state == 1){
            state = 0;
            cout << "Book rented" << endl;
        }
        else if (state == 0){
            state = 1;
            cout << "Book returned" << endl;
        }
        else {
            cout << "ERROR: Inexistent book" << endl;
        }
    }
};

book set_book(int i){
    string title, author;
    cout << "Book " << i+1 << endl;
    cout << "Title: "; getline (cin, title);
    cout << "Author: "; getline (cin, author);
    book newbook(title, author);
    return newbook;
}

#endif