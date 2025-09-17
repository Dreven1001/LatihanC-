#include <iostream>
#include <string>
using namespace std;

int main() {
    int pilihan, tamu;
    char dekorasi, hiburan;
    string acara;
    long biaya_dasar = 0, biaya_catering = 0, biaya_dekorasi = 0, biaya_hiburan = 0;
    long subtotal, pajak, total;

    cout << "=== Program Tagihan Event Organizer ===\n";
    cout << "1. Pernikahan (Rp 40.000.000)\n";
    cout << "2. Ulang Tahun (Rp 12.000.000)\n";
    cout << "3. Seminar (Rp 20.000.000)\n";
    cout << "Pilih jenis acara (1-3): ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            acara = "Pernikahan";
            biaya_dasar = 40000000;
            break;
        case 2:
            acara = "Ulang Tahun";
            biaya_dasar = 12000000;
            break;
        case 3:
            acara = "Seminar";
            biaya_dasar = 20000000;
            break;
        default:
            cout << "Pilihan tidak valid!\n";
            return 0;
    }

    cout << "Masukkan jumlah tamu: ";
    cin >> tamu;
    biaya_catering = tamu * 200000; // Rp 200.000 per tamu

    cout << "Tambahkan dekorasi mewah? (y/n): ";
    cin >> dekorasi;
    if (dekorasi == 'y' || dekorasi == 'Y') {
        biaya_dekorasi = 10000000;
    }

    cout << "Tambahkan hiburan (band/DJ)? (y/n): ";
    cin >> hiburan;
    if (hiburan == 'y' || hiburan == 'Y') {
        biaya_hiburan = 7000000;
    }

    // Hitung subtotal
    subtotal = biaya_dasar + biaya_catering + biaya_dekorasi + biaya_hiburan;

    // Hitung pajak progresif
    if (subtotal <= 50000000) {
        pajak = subtotal * 0.05;
    } else if (subtotal <= 100000000) {
        pajak = subtotal * 0.10;
    } else {
        pajak = subtotal * 0.15;
    }

    total = subtotal + pajak;

    // Cetak rincian tagihan
    cout << "\n=== Rincian Tagihan ===\n";
    cout << "Jenis Acara   : " << acara << endl;
    cout << "Biaya Dasar   : Rp " << biaya_dasar << endl;
    cout << "Catering (" << tamu << " tamu) : Rp " << biaya_catering << endl;
    cout << "Dekorasi      : Rp " << biaya_dekorasi << endl;
    cout << "Hiburan       : Rp " << biaya_hiburan << endl;
    cout << "Subtotal      : Rp " << subtotal << endl;
    cout << "Pajak         : Rp " << pajak << endl;
    cout << "Total Bayar   : Rp " << total << endl;

    return 0;
}
