#include <iostream>
#include <cstdlib> // srand, rand
#include <ctime>   // time
#include <cmath>  // pow

using namespace std;

int main() {
    // srand(time(0));
    // int a = 10, b = 3; // deklarasi variabel

    // cout << "Nilai a (pertama): " << endl; // Input nilai a
    // cin >> a;
    // cout << "Nilai b (k2): " << endl; // Input nilai b
    // cin >> b;

    // // Kalkulator sederhana buat praktek
    // cout << "Penjumlahan: " << a + b << endl; // Output penjumlahan
    // cout << "Pengurangan: " << a - b << endl; // Output pengurangan
    // cout << "Perkalian: " << a * b << endl;   // Output
    // cout << "Pembagian: " << a / b << endl;   // Output pembagian
    // cout << "Modulo: " << a % b << endl;      // Output modulo
    // cout << "Pangkat: " << pow(a, b) << endl; // Output pangkat

    // int x;

    // cout << "Angka random: " << rand(x) % 100 + 1 << endl; // Output angka random 1-100

    int x = rand() % 100 + 1; // deklarasi variabel x dengan nilai random 1-100
    cout << x << endl;        // Output nilai x

    if (x >= 90) { // jika x lebih besar atau sama dengan 90
        cout << "Grade : A" << endl; // Output grade A
    } else if (x >= 85) { // jika x lebih besar atau sama dengan 85
        cout << "Grade : B" << endl; // Output grade B
    } else if (x >= 75) { // jika x lebih besar atau sama dengan 75
        cout << "Grade : C" << endl; // Output grade C
    } else if (x >= 65) { // jika x lebih besar atau sama dengan 65
        cout << "Grade : D" << endl; // Output grade D
    } else if (x >= 55) { // jika x lebih besar atau sama dengan 55
        cout << "Grade : E" << endl; // Output grade E
    } else {                  // jika x kurang dari 55
        cout << "Grade : F" << endl; // Output grade F
    }
    return 0;
}
