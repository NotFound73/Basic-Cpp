#include <iostream>
#include <filesystem>
#include <string>
using namespace std;
namespace fs = std :: filesystem;

void Ordenado(){
    fs :: directory_iterator downloads ("C:/Users/Downloads");
    
    for (const auto& archivo : downloads){
        fs :: path ext = archivo.path().extension();
        fs :: path destino;
        if (!archivo.is_regular_file())
        continue;
        
        if (ext == ".pdf"){
            destino = "C:/Users/quiqu/Downloads/PDF";
        }

        else if (ext == ".mp3"){
            destino = "C:/Users/quiqu/Downloads/Musica";
        }

        else if (ext == ".jpg" || ext == ".png"){
            destino = "C:/Users/quiqu/Downloads/Imagenes";
        }

        else if (ext == ".exe"){
            destino = "C:/Users/quiqu/Downloads/Ejecutables";
        }

        else if (ext == ".mp4"){
            destino = "C:/Users/quiqu/Downloads/Videos";
        }

        else{
            destino = "C:/Users/quiqu/Downloads/Otros";
        }

        fs :: rename(archivo.path(), destino / archivo.path().filename());
    }
    cout << "Downloads ha sido organizado correctamente" << endl;
    system("pause");
}

int main (){
    char opp;

    do {
         cout << "Realizar Protocolo de ordenamiento? (Y/n)" << endl;
         cin >> opp;
         switch (opp){
            case 'Y': Ordenado();
            return 0;
            case 'n':
            break;
            default: cout << "Opción invalida" << endl;
        }
    } while (opp != 'n');
    return 0;
}

