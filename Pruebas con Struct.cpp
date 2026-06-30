#include <iostream>
#include <string>
using namespace std;

int main(){
    struct Student{
        string name;
        int age;
        float grade;
    };

    Student alumno1;
    alumno1.name="Pablo";
    alumno1.age=19;
    alumno1.grade=9.8;

    cout<<"Listado de solo un Alumno (de momento)";
    cout<<"\nNombre: "<<alumno1.name<<"\nEdad: "<<alumno1.age<<"\nCalificacion: "<<alumno1.grade;

    return 0;
}