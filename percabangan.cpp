#include <iostream>

using namespace std;

int main() {
    int x;

    cout << "Total belanja: "; // input belanja
    cin >> x;

    if (x > 500000) { // Jika belanja lebih dari 500.000
        cout << "Selamat, anda dapat diskon 20%" << endl;
    } else if (x > 200000) { // Jika belanja lebih dari 200.000
        cout << "Selamat, anda dapat diskon 10%" << endl;
    } else { // Jika belanja kurang dari 200.000
        cout << "Maaf, anda tidak dapat diskon" << endl;
    }
    return 0;

}
