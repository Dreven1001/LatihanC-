#include <iostream>

using namespace std;

int main() {
    int umur;

    cout << "Masukan umur anda: " << endl; // Minta inputan umur dari user
    cin >> umur;

    if (umur < 13) { // Jika umur kurang dari 13
        cout << "Anda masih anak anak. \n";
    } else if (umur <= 17) {    // Jika umur antara 13-17
        cout << "Anda sudah remaja \n";
    } else if (umur <= 59) { // Jika umur antara 18-59
        cout << "Anda sudah dewasa \n";
    } else { // Jika umur 60 keatas
        cout << "Anda sudah tua \n";
    }
    // } else if (umur >= 60){
    //     cout << "Anda sudah tua \n";
    // }
    return 0;
}