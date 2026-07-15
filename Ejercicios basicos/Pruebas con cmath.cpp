#include <iostream>
#include <cmath>
using namespace std;

//Teorema de Pitagoras
void Pitagoras(){
    float opp, adj, hyp;

    cout << "Cateto opuesto: "; cin >> opp;
    cout << "Cateto adjacente: "; cin >> adj;
    hyp=sqrt(pow(opp, 2)+pow(adj, 2));
    cout<<"Hipotenusa: " << hyp<< endl;
    system ("pause");
}

void Circulo(){
    float const pi=3.1416;
    float r, area, vol;

    cout<<"Radio del circulo: "; cin>>r;
    area=pi*pow(r, 2);
    vol=(pi*pow(r, 3))*(4.0/3.0);

    cout << "\nArea: " << area << "\nVolumen: " << vol << endl;
    system ("pause");
}


int main(){
    int x;

    do {
        system ("cls");
        cout<<"\n====================\nMenu de Operaciones\n====================" << endl << "\n1. Teorema de Pitagoras\n2. Area/Volumen de un circulo\n3. Terminar codigo\nSeleccionar(1, 2, 3): ";
        cin>>x;
        switch (x){
            case 1: Pitagoras();
            break;
            case 2: Circulo();
            break;
            case 3: cout << "Codigo finalizado";
            break;
            default: cout << "Numero invalido";
        }
    } while (x!=3);
}
