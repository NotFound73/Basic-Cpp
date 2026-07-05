#include <iostream>
#include <string>
using namespace std;

void Ord_Alf(string Nom[5]){
    for (int i=0; i<5; i++){
        for (int j=i+1; j<5; j++){
            if (Nom[i]>Nom[j]){
                string Aux = Nom[i];
                Nom[i] = Nom[j];
                Nom[j] = Aux;
            }
        }
    }
}

int main(){
    string Nom[5];
    int opp;

    cout<<"Lista de Nombres (solo incluir mayuscula en la primer letra)"<<endl;

    for (int i=0; i<5; i++){
        cout << "Nombre " << i+1 << ": "; 
        getline (cin, Nom[i]);
    }

    auto Print = [](string Nom[5]){
        for (int i=0; i<5; i++){
            cout << i+1 << ":" << Nom[i] << endl;
        }
    };

    Print(Nom);

    cout<<endl<<"¿Qué se va a hacer?"<<endl
    <<"1.Ordenar Alfabeticamente"<<endl
    <<"2.No option yet"<<endl
    <<"Seleccionar: ";
    cin>>opp;

    switch(opp){
        case 1: Ord_Alf(Nom);
        cout<<endl<<"Lista en orden alfabético"<<endl;
         break;
        case 2: cout<<"Not yet"; break;
        default: cout<<"Opción no valida";
    }

    Print(Nom);
}