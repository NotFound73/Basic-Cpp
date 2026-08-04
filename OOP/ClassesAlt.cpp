#include <iostream>
#include <string>
#define N 3
using namespace std;

class Cat{
    public:
    string color;
    string nom;
    int edad;
    
    Cat(){
        color="unknown";
        nom="unknown";
        edad=-1;
    }

    void leer(){
        cout << "Nombre: "; getline(cin, nom);
        cout << "Color: "; getline(cin, color);
        cout << "Edad: "; cin >> edad;
        cin.ignore();
    }

    void mostrar(){
        cout << "Nombre: " << nom << endl;
        cout << "Color: " << color << endl;
        if(edad==-1){
            cout << "Edad: Unknown" << endl;
        }
        else {
            cout << "Edad: " << edad << endl;
        }
        
    }
};

int main(){
    Cat kittens[N];
    for(int i=0; i<N; i++){
        cout << "Gato " << i+1 << endl;
        kittens[i].leer();
    }
    
    cout << "===============\nListado de Gatos\n===============" << endl;
    for (int i=0; i<N; i++){
        cout << "Gato " << i+1 << endl;
        kittens[i].mostrar();
    }
    system("pause");
    return 0;
}

    
