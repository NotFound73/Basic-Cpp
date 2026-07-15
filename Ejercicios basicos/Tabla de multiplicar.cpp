//Mostrar 10 caractéres numéricos de la multiplicación de un número aleatorio en forma de tabla
#include <iostream>
#define N 10
using namespace std;

int Loop(int num, int cont){
    if (cont<=N){
        cout << num << "x" << cont << "=" << num*cont << endl;
        Loop (num, cont+1);
    }
    else{
        return 1;
    }
}

int main(){
    int x;

    cout<<"====================\nTabla de Multiplicar\n===================="<<endl<<endl;
    cout<<"Selecciona el número: ";
    cin>>x;
    Loop(x, 1);
}