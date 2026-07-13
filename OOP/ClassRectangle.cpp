#include <iostream>
using namespace std;

class rectangle {
    private:
    float base;
    float height;

    public:
    rectangle(){
        base = 0;
        height = 0;
    }

    rectangle(int x, int y) {
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
};

int main (){
    int x, y;

    cout << "Defining the Rectangle" << endl;
    cout << "Base: "; cin >> x;
    cout << "Height: "; cin >> y;
    rectangle obj(x, y);
    
    if (obj.get_base()==0 || obj.get_height()==0){
        system ("cls");
        cout << "Data ERROR";
    }
    else{
        cout << "Rectangle Properties" << endl;
        cout << "Base: " << obj.get_base() << endl;
        cout << "Heigh: " << obj.get_height() << endl;
        cout << "Perimeter: " << obj.get_perimeter() << endl;
        cout << "Area: " << obj.get_area() << endl;
    }
}