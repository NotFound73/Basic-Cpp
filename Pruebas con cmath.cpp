#include <iostream>
#include <cmath>
using namespace std;

//Teorema de Pitagoras
void Pitagoras(){
    float opp, adj, hyp;

    cout<<"Cateto opuesto: "; cin>>opp;
    cout<<"Cateto adjacente: "; cin>>adj;
    hyp=sqrt(pow(opp, 2)+pow(adj, 2));
    cout<<"Hipotenusa: "<<hyp;
}

void Circulo(){
    float const pi=3.1416;
    float r, area, vol;

    cout<<"Radio del circulo: "; cin>>r;
    area=pi*pow(r, 2);
    vol=(pi*pow(r, 3))*(4.0/3.0);

    cout<<"\nArea: "<<area<<"\nVolumen: "<<vol;
}


int main(){
    int x;

    cout<<"¿Que se va a hacer?\n1.Teorema de Pitagoras\n2.Area/Volumen de un circulo\nSeleccionar: ";
    cin>>x; cout<<"\n";
    if (x==1){Pitagoras();}
    else if (x==2){Circulo();}
    else {cout<<"Numero invalido";}
}
