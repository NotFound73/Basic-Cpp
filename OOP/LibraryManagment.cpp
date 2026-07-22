#include <iostream>
#include <string>
using namespace std;
#define N 10

//Program to create a book inventory
class book{
    private:
    string title;
    string author;

    public:
    int state=1;
    book(){
        title = "Unknown";
        author = "Unknown";
        state = 2;
    }

    book(string title, string author){
        this -> title = title;
        this -> author = author;
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
    cout << "Book" << i+1 << endl;
    cout << "Title: "; getline (cin, title);
    cout << "Author: "; getline (cin, author);
    book newbook(title, author);
    return newbook;
}

int menu(){
    int op;
    
    cout << "\n================\n Library Admin\n================\n" << endl;
    cout << " 1. Show Library\n 2. Add books\n 3. Change book state\n 4. Reset Library\n Select: ";
    cin >> op;
    cin.ignore();
    return op;
}

int main(){
    book bunch[N];
    int opp;

    do {
        
        system("cls");
        opp = menu();
        switch(opp){
            case 1: {
                cout << "\n=========\nLibrary\n=========\n";
                for (int i=0; i<N; i++){
                    bunch[i].get_book(i);
                }
                break;
            }            

            case 2:{
                int n;
                cout << "NUmber of books that will be added: "; 
                cin >> n;
                cin.ignore();

                cout << "Set Library" << endl;
                for (int i=0; i<n; i++){
                    bunch[i] = set_book(i);
                }
                break;
            }
            
            case 3:{
                int r;
                cout << "CHANGE BOOK STATE\nNumber of the book: ";
                cin >> r;
                bunch[r-1].change_book_state();
                break;
            }

            case 4: break;

            default: 
            cout << "Error (invalid number)"<<endl;
        } 
        system("pause");
        system ("cls");
    } while (opp!=4);

    return 0;
}