#include <iostream>
#include "gas_ideal.h"
using namespace std;

int main (){
    float T=0, V=0, P=0, n=0;

    cout << "==========================\nFormulario de Gases Ideales\n==========================\n";
    cout << "\n Temperatura: "; cin >> T;
    cout << " Volumen: "; cin >> V;
    cout << " Presion: "; cin >> P;
    cout << " Numero molar: "; cin >> n;
    cout << endl;

    if (T == 0){
        T = temp(n, V, P);
    }
    else if (V == 0){
        V = vol(n, T, P);
    }
    else if (P == 0){
        P = pres(n, V, T);
    }
    else if (n == 0){
        n = nmol(P, V, T);
    }

    cout << "\n Numero molar: " << n << " moles";
    cout << "\n Presion: " << P << " atm";
    cout << "\n Volumen: " << V << " metros cubicos";
    cout << "\n Temperatura: " << T << " K" << endl;
    
    system("pause");
    return 0;
}

