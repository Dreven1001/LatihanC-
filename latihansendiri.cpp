// Kalkulator sederhana pakai switch case
// Latihan

#include <iostream>

using namespace std;    

int main() {
    char rawr;
    int a, b;

    cout << "Pilih operator (+, -, *, /): ";    // input operator
    cin >> rawr;

    cout << "Masukan nilai pertama: "; // input nilai pertama
    cin >> a;

    cout << "Masukan nilai kedua: "; // input nilai kedua
    cin >> b;

    switch(rawr) {
        case '+':
            cout << "Hasilnya adalah: " << a + b; // Jika hasilnya penjumlahan
            break;
        case '-':
            cout << "Hasilnya adalah: " << a - b; // Jika hasilnya pengurangan
            break;
        case '*':
            cout << "Hasilnya adalah: " << a * b; // Jika hasilnya perkalian
            break;
        case '/':
            cout << "Hasilnya adalah: " << a / b; // Jika hasilnya pembagian
            break;
        default:
            cout << "Operator tidak dikenal"; // Jika operator tidak dikenal
    }
    return 0;
}