#include <iostream>
#include <string>
using namespace std;

float outcome;
const float pi=3.1416;

int menu(int opp){
    cout << "\n==================\nSeleccion Geometrica\n==================\n" <<
    "1. Triangulo\n2. Cuadrado\n3. Círculo\n4. Trapezio\n5. Salir\nSeleccionar: ";
    cin >> opp;
    return opp;
}

class area{
    public:
    float area_square(float lado){
        outcome = lado * lado;
        return outcome;
    }
    float area_triangle(float b, float h){
        outcome = (b * h)/2;
        return outcome;
    }
    float area_circle(float rad){
        outcome = pi * (rad * rad);
        return outcome;
    }
    float area_trapezium(float B, float b, float h){
        outcome = ((B + b)*h)/2;
        return outcome;
    }
};

int main(){
    int op, x, y, z;
    area obj;

    do{
        op=menu(op);
        switch (op){
        case 1: cout << "Calculemos el area del triangulo" << endl;;
        cout << "Base: "; cin >> x;
        cout << "Altura: "; cin >> y;
        outcome = obj.area_triangle(x, y);
        cout << "El area del triangulo es: " << outcome << endl;
        break;

        case 2: cout <<"Calculemos el area del cuadrado" << endl;
        cout << "Lado: "; cin >> x;
        outcome = obj.area_square(x);
        cout << "El area del cuadrado es: " << outcome << endl;
        break;
        
        case 3: cout <<"Calculemos el area del circulo" << endl;
        cout << "radio: "; cin >> x;
        outcome = obj.area_circle(x);
        cout << "El area del circulo es: " << outcome << endl;
        break;

        case 4: cout <<"Calculemos el area del trapecio" << endl;
        cout << "Base grande: "; cin >> x;
        cout << "Base chica: "; cin >> y;
        cout << "Altura: "; cin >> z;
        outcome = obj.area_trapezium(x, y, z);
        cout << "El area del trapecio es: " << outcome << endl;
        break;

        case 5: cout << "Programa finalizado" << endl;
        break;

        default: cout << "Opción Invalida";
        break;
    }
    system("pause");
    system("cls");
} while (op!=5);

return 0;
}