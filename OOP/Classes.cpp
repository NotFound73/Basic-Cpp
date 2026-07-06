#include <iostream>
#include <string>
using namespace std;

class Cat{
    public:
    string color;
    string nom;
    int edad;

    Cat(){
        color="unknown";
        nom="unknown";
        edad=0;
    }
    
    Cat(string x, string y, int z){
        color=x;
        nom=y;
        edad=z;
    }
};

int main(){
    Cat cat1 ("Naranja", "Nachito", 4);
    Cat cat2 ("Gris", "Mauricio", 5);
    Cat cat3;
    cout<<"Listado de Kittens"<<endl;
    cout<<"Gato 1\nNombre:"<< cat1.nom << "\nColor: "<< cat1.color << "\nEdad:" << cat1.edad << endl << endl;
    cout<<"Gato 2\nNombre:"<< cat2.nom << "\nColor: "<< cat2.color << "\nEdad:" << cat2.edad << endl << endl;
    cout<<"Gato 3\nNombre:"<< cat3.nom << "\nColor: "<< cat3.color << "\nEdad:" << cat3.edad << endl << endl;


    return 0;
}