#include <iostream>
using namespace std;

//Opción no eficiente ni segura

class rectangle{
    public:
    float base;
    float height;
    float perimeter;
    float area;

    rectangle (float x, float y){
        base = x;
        height = y;
        perimeter = 2*base + 2*height;
        area = base * height;
    }
};

int main(){
    float x, y;

    cout << "Rectangulos" << endl;
    cout << "Base: "; cin >> x;
    cout << "Height: "; cin >> y;
    rectangle obj(x, y);
    cout << "Perimeter: " << obj.perimeter << endl;
    cout << "Area: " << obj.area << endl;

    system("pause");
    return 0;
}