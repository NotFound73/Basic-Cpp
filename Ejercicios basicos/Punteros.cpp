#include <iostream>
#include <string>
using namespace std;

//Memoria dinamica

void set_data(int* Num, string* Name){
    cout << "Num: "; cin >> *Num;
    cout << "Name: "; cin >> *Name;
    cout << "Num: " << *Num << endl;
    cout << "Name: " << *Name << endl;
}

int main(){
    int* num = nullptr;
    string* name = nullptr;

    //crea objeto sin nombre ni memoria fija
    num = new int;
    name = new string;

    set_data(num, name);

    delete num;
    delete name;

    return 0;
}