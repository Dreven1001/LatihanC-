#include <iostream>

using namespace std;

int main() {
    int x, mmk = 0;

    cout << "Melbono angkane: ";
    cin >> x;

    if (cin.fail()) { 
        cout << "Kudu angka nek ga kakean cok!";
        return 1;
    }

    for (int i = x; i > 0; i /= 10) { // Looping logic e
        mmk = mmk * 10 + i % 10; // Bagian asu e iki error ndek kene e ket maeng
    }

    cout << "Angkane dadi ngene mbot: " << mmk;
    return 0;
}
