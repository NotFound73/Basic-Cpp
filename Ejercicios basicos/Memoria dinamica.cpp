#include <iostream>
#include <string>
using namespace std;

int size_input(){
    int size;
    cout << "\n===================\n Sports Stadistics \n====================" << endl;
    cout << "Number of games this season (1-20): "; cin >> size;
    cin.ignore();
    return size;
}

void data_input(int size, string name[], int matches[]){
    for (int i=0; i<size; i++){
        cout << "\n----------\nPlayer " << i+1 << "\n-----------" << endl;
        cout << "Name: "; getline(cin, name[i]);
        cout << "Number of matches played: "; cin >> matches[i];
        cin.ignore();
    }
}

int menu(){
    int opp;
    cout << "\n=============\n Option Selection \n=============" << endl;
    cout << " 1.Show data\n 2.Calculate player with most matches\n 3.Restart data" << endl;
    cout << "Select: "; cin >> opp;
    cin.ignore();
    return opp;
}

void get_data(int size, string name[], int matches[]){
    for (int i=0; i<size; i++){
        cout << "\n----------\nPlayer " << i+1 << "\n-----------" << endl;
        cout << "Name: " << name[i] << endl;
        cout << "Number of matches played: " << matches[i] << endl; 
    }
}

void get_most_matches(int size, string name[], int matches[]){
    int qnty = 0, max;

    for (int i=0; i<size; i++){
        if (qnty < matches[i]){
            qnty = matches[i];
            max = i;
        }
    }

    for (int i=0; i<size; i++){
        if (qnty == matches[i]){
            if (max != i){
                cout << "\nMultiple number of players with the most amount of matches" << endl;
            }
            else {
                cout << endl << name[max] << " was the player with the most number of matches played (" << qnty << ")" << endl;
            }
        }
    }

    
}

int main (){
    int size, opp;
    
    do{
        size = size_input();
        int* m_info = new int[size];
        string* n_info = new string[size];
        
        data_input(size, n_info, m_info);
        do{
            opp = menu();
            switch (opp){
                case 1: get_data(size, n_info, m_info);
                break;
                case 2: get_most_matches(size, n_info, m_info);
                break; 
                case 3: break;
                default: cout << "\nIn progres" << endl;
            }
        }while (opp != 3);

        delete[] m_info;
        m_info = nullptr;
        delete[] n_info;
        n_info = nullptr;

    } while (size >= 1 && size <= 20);

    return 0;
}