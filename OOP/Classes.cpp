#include <iostream>
#include <string>
using namespace std;

//en este caso, funciona como struct
class Cat{
    public:
    string color;
    string nom;
    int edad;
};

int main(){
    Cat kittens[5];
    
    cout<<"Introduce a tus gati-hijos"<<endl;
    for (int i=0; i<5; i++){
        cout<<"Gato "<<i+1<<endl;
        cout<<"Nombre: "; getline(cin, kittens[i].nom);
        cout<<"Color: "; getline(cin, kittens[i].color);
        cout<<"Edad: "; cin>>kittens[i].edad; cout<<endl;
        cin.ignore();
    }

    auto Print= [](Cat kittens[5]){
        for (int i=0; i<5; i++){
            cout<<"Gato "<<i+1<<endl;
            cout << "Nombre: " << kittens[i].nom << endl;
            cout << "Color: " << kittens[i].color << endl;
            cout << "Edad: " << kittens[i].edad << endl;
        }
    };

    Print(kittens);

    return 0;
}