#include <iostream>
#include <string>
#include <filesystem>

using namespace std;
namespace fs = std::filesystem;

int main() {
    fs :: directory_iterator descargas ("C:\\Users\\quiqu\\Downloads");
    int num_files= 0;

    for (const auto& archivo : descargas){
        cout << archivo.path().filename() << endl;
        num_files ++;
    }
    system("pause");

    cout << "Amount of files on Downloads: " << num_files << endl;
    system("pause");

}

