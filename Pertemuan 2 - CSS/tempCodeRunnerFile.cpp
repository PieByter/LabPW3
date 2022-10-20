#include <iostream>
using namespace std;

int main(){
    int nilai; char temp;
    system("cls");
    cout << "Masukkan Nilai : ";cin >> nilai;
    if (nilai >= 81){
        temp = 'A';
    }
    else if (nilai >= 71){
        temp = 'B';
    }
    else if (nilai >= 61){
        temp = 'C';
    }
    else if (nilai >= 51){
        temp = 'D';
    }
    else if (nilai <= 50){
        temp = 'E';
    }
    cout << "Nilai Anda " << temp << endl;
}