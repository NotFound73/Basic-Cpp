#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    fstream archivo("C:\\Users\\Downloads\\Archivo.txt", ios :: in | ios :: out | ios :: app);

    string lecture;
    cout << "FILE CONTENT: " << endl;

    while(getline(archivo, lecture)){
        cout << lecture << endl;
    }

    archivo.clear();

    cout << "¿Do you wanna add something? (1.Yes / 2.No)";
    int opp;
    cin >> opp;
    cin.ignore();

    switch (opp){
        case 1: {
            string str;
            getline(cin, str);

            archivo << str << endl;
            archivo.close();
        } break;

        case 2: break;
        archivo.close();

        default: cout << "Non-valid option";
    }
}