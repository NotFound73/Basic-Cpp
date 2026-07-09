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
    Cat(string x, string y, int z){
        color=y;
        nom=x;
        edad=z;
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
        string x, y;
        int z;
        cout << "Nombre: "; getline(cin, x);
        cout << "Color: "; getline(cin, y);
        cout << "Edad: "; cin >> z;
        cin.ignore();
        kittens[i] = Cat(x, y, z);
    }
    
    cout << "===============\nListado de Gatos\n===============" << endl;
    for (int i=0; i<N; i++){
        cout << "Gato " << i+1 << endl;
        kittens[i].mostrar();
    }
    return 0;
}

    
