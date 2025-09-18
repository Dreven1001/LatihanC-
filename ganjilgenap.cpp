#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    
    srand(time(0));

    int x; 
    // int score = 0;
    int mbarang = rand() % 2;

    cout << "== Game tebak tebak angka ganjil genap ==";
    cout << "Round 1";
    cout << "Tebaklah ganjil atau genap\n0. Ganjil\n1. Genap\nMasukkan pilihanmu: ";
    cin >> x;

    if(cin.fail()) { 
        cout << "Angka tidak valid";
        return 1;
    }

    if(x == 0 && mbarang != 0 || x != 0 && mbarang == 1) {
        cout << "Kamu menang!: " << mbarang; 
        // score++;
    } else {
        cout << "Kamu kalah!: " << mbarang;
    }

    return 0;
}
