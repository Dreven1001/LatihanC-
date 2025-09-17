#include <iostream>

using namespace std;

int main() {
    int angka1, angka2, angka3;

    cout << "Masukan angka pertama: "; // angka pertama tod
    cin >> angka1; 

    cout << "Masukan angka kedua: "; // angka kedua tod
    cin >> angka2;

    cout << "Masukan angka ketiga: "; // angka ketiga tod
    cin >> angka3;

    if (angka1 >= angka2 && angka1 >= angka3) { // jika angka1 terbesar
        cout << "Angka terbesar adalah: " << angka1 << endl;
    } else if (angka2 >= angka1 && angka2 >= angka3) { // jika angka2 terbesar
        cout << "Angka terbesar adalah: " << angka2 << endl;
    } else { // jika angka3 terbesar
        cout << "Angka terbesar adalah: " << angka3 << endl;
    }

    return 0;
}