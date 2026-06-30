#include <iostream>
#include <string>
using namespace std;

void Num (){
    int numbers[5];

    cout<<"Listado de numeros\n";
    for (int i = 0; i < 5; ++i){
        cout<<"Numero "<< i+1 <<": ";
        cin>>numbers[i];
    }

    for (int i = 0; i < 5; ++i){
        cout<<"\n"<<numbers[i];
    }
}

void Str (){
    string names[5];

    cin.ignore();

    cout<<"Listado de nombres\n";
    for (int i=0; i<5; i++){
        cout<<"Nombre "<<i+1<<": ";
        getline (cin, names[i]);
    }

    for (int i=0; i<5; i++){
        cout<<"\n"<<names[i];
    }
}

int main(){
    int opcion;
    cout<<"Que tipo de listado requiere?\n1.Listado de numeros\n2.Listado de nombres\nSeleccionar: ";
    cin>>opcion;

    switch (opcion){
        case 1: Num(); break;
        case 2: Str(); break;
        default: cout<<"Opcion Invalida";
    }
}