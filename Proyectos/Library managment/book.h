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
    book();
    book(string title, string author);

    void get_book(int i);
    void change_book_state();
};

book set_book(int i);

#endif