#include <iostream>

using namespace std;

int main() {
    char op;     // untuk operator
    int a, b;    // untuk bilangan

    cout << "Pilih operator (+, -, *, /): ";
    cin >> op;

    cout << "Masukan nilai pertama: ";
    cin >> a;
    cout << "Masukan nilai kedua: ";
    cin >> b;

    switch(op) {
        case '+':
            cout << "Hasilnya adalah: " << a + b;
            break;
        case '-':
            cout << "Hasilnya adalah: " << a - b;
            break;
        case '*':
            cout << "Hasilnya adalah: " << a * b;
            break;
        case '/':
            cout << "Hasilnya adalah: " << a / b;
            break;
        default:
            cout << "Operator tidak dikenal";
    }

    return 0;
}