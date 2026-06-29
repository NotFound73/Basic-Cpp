#include <iostream>
#include <string>
using namespace std;

int main (){
    string Nom;

    cout<<"¿Cuál es tú nombre?\n";
    getline(cin, Nom);
    cout<<"\nHola "<<Nom<<"!";
}