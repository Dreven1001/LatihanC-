#include <iostream>

using namespace std;

int main() {
    int x;

    cout << "Masukkan tahun: "; // input tahun
    cin >> x;

    if (x % 400 == 0) { // langsung kabisat
        cout << x << " adalah tahun kabisat" << endl;
    } else if (x % 100 == 0) { // bukan kabisat
        cout << x << " bukan tahun kabisat" << endl;
    } else if (x % 4 == 0) { // kabisat
        cout << x << " adalah tahun kabisat" << endl;
    } else { // bukan kabisat
        cout << x << " bukan tahun kabisat" << endl;
    }

    return 0;
}
