#include <iostream>

using namespace std;

int main() {
    int nilai; // nilai
    char x;

    cout << "Masukan nilai (0-100): "; // input nilai
    cin >> nilai;

    // if (input.find_first_not_of("0123456789") == string::npos) {
    //     nilai = stoi(input); // konversi string ke integer
    // } else {
    //     cout << "Input tidak valid. Masukkan angka antara 0-100." << endl;
    //     return 1; // keluar dari program jika input tidak valid
    // }

    // if (!isNumber(input) || input.empty()) {
    //     cout << "Input tidak valid. Masukkan angka antara 0-100." << endl;
    //     return 1; // keluar dari program jika input tidak valid
    // }

    // if (cin.fail() || !(cin >> nilai) || nilai < 0 || nilai > 100) {
    //     cout << "Input tidak valid. Masukkan angka antara 0-100." << endl;
    //     return 1; // keluar dari program jika input tidak valid
    // } else {
    //     cout << "Masukan nilai (0-100): "; // input nilai
    //     cin >> nilai;
    // }

    if (cin.fail() || nilai < 0 || nilai > 100) { // string validasi
        cout << "Input tidak valid. Masukkan angka antara 0-100." << endl;
        return 1; // keluar dari program jika input tidak valid
    }

    switch(nilai / 10) {
        case 10:
        case 9:
        case 8:
        x = 'A'; // nilai A
        break;
        case 7:     
        x = 'B'; // nilai B
        break;
        case 6:
        x = 'C'; // nilai C
        break;
        case 5:
        x = 'D'; // nilai D
        break;
        default:
        x = 'E'; // nilai E
    }
    cout << "Nilai Angka: " << nilai << endl; // output nilai angka
    cout << "Dapatnya: " << x << endl; // output nilai huruf
    return 0;
}
