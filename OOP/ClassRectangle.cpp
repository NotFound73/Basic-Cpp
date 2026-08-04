#include <iostream>
using namespace std;
#define N 3

class rectangle {
    private:
    float base;
    float height;

    public:
    rectangle(){
        base = 0;
        height = 0;
    }

    rectangle(float x, float y) {
        if(x>0 && y>0){
            base = x;
            height = y;
        }
        else{
            base = 0;
            height = 0;
        }
    }

    float get_base(){
        return base;
    }

    float get_height(){
        return height;
    }

    float get_perimeter(){
        return 2*base + 2*height;
    }

    float get_area(){
        return base*height;
    }

    bool isValid(){
        return base > 0 && height > 0;
    }

    void show_rectangle(int i){
        cout << "Rectangle Num. " << i+1 << endl;
        cout << "Base: " << get_base() << endl;
        cout << "Heigh: " << get_height() << endl;
        cout << "Perimeter: " << get_perimeter() << endl;
        cout << "Area: " << get_area() << endl;
    }
};

rectangle Get_Rectangle(int i){
    float x, y;

    cout << "Defining the Rectangle Num. " << i+1 << endl;
    cout << "Base: "; cin >> x;
    cout << "Height: "; cin >> y;
    rectangle obj(x, y);
    
    if (!obj.isValid()){
        system("cls");
        cout << "Data ERROR" << endl;
        system("pause");
    }
    
    return obj;
}

int Get_biggest_area(rectangle box[N]){
    int mayor;

    for (int i=0; i<N-1; i++){
        if (box[i].get_area() > box[i+1].get_area()){
            mayor = i;
        }
    }
    return mayor;
}

int main (){
    rectangle box[N];
    
    for (int i=0; i<N; i++){
        box[i]= Get_Rectangle(i);
    }
    system("pause");
    system("cls");

    for (int i=0; i<N; i++){
       if (!box[i].isValid()){
        cout << "Rectangle Num." << i+1 << " is invalid" << endl;
       } 
       else {
        box[i].show_rectangle(i);
       }
    }

    system("pause");
    system("cls");

    int Mayor = Get_biggest_area(box);
    cout << "Mayor area (Rectangulo Num. " << Mayor+1 << "): " << box[Mayor].get_area() << endl;
    system("pause");
    
    return 0;
}