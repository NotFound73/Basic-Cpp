#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int menu (){
  int opp;
  cout << "Control de Archivos" << endl << " 1. Leer\n 2. Escribir\n 3.End code" << endl << "Seleccionar: ";
  cin >> opp;
  cin.ignore();
  return opp;
}

void read(){
  //Lectura de archivos a travez de la función ifstream
  ifstream archivo("C:\\Users\\Downloads\\Archivo.txt");

  if (!archivo.is_open()){
    cout << "ERROR, el archivo no existe" << endl;
    system("pause");
  }

  else{
  string str;
  cout << "Contenido del archivo: " << endl;

  while (getline(archivo, str)){
    cout << str << endl;
  }

  system ("pause");
  archivo.close();
  }
}

void write(){
  //Escritura de archivos a travez de la función ifstream
  ofstream archivo("C:\\Users\\Downloads\\Archivo.txt", ios::app);

  if (!archivo.is_open()){
    cout << "ERROR, el archivo no existe" << endl;
    system("pause");
  }

  else{
    string str;

    cout << "Escribe contenido del archivo: " << endl;
    getline (cin, str);

    archivo << str << endl;
    archivo.close();
  }
}

int main (){
  int opp;
  
  do{
    opp = menu();
    switch(opp){
      case 1: read();
      break;

      case 2: write();
      break;

      case 3: break;

      default: cout << "Invalid option" << endl;
    }
  } while (opp!=3);
}