#include <iostream>

using namespace std;

int main() {
    int i;

    cout << "Masukan nilai mahasiswa: " << endl;
    cin >> i;
    
    if(i >= 85) { // Program untuk nilai A
        cout << "Nilai A" << endl;
    } else if(i >= 70) { // Program untuk nilai B
        cout << "Nilai B" << endl;
    } else if(i >= 55) { // Program untuk nilai C
        cout << "Nilai C" << endl;
    } else if(i >= 40) { // Program untuk nilai D
        cout << "Nilai D" << endl;
    } else if(i < 40) { // Program untuk nilai E
        cout << "Nilai E" << endl;
    }

    return 0;
}