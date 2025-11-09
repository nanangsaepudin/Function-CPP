#include <iostream>
#include <thread>
#include <chrono>
using namespace std;

// Fungsi untuk menghitung luas
double hitung_luas(double p, double l) {
    return p * l;
}

// Fungsi untuk menghitung keliling
double hitung_keliling(double p, double l) {
    return 2 * (p + l);
}

int main() {
    double panjang, lebar;
    double luas, keliling;
    char pilih;

    do {
        cout << "Masukkan panjang : ";
        cin >> panjang;
        cout << "Masukkan lebar   : ";
        cin >> lebar;
        cout << endl;

        luas = hitung_luas(panjang, lebar);
        keliling = hitung_keliling(panjang, lebar);

        cout << "Luas     : " << luas << endl;
        cout << "Keliling : " << keliling << endl;

        cout << "\nApakah mau masukkan lagi (y/n)? ";
        cin >> pilih;
        cout << endl;
    } while (pilih != 'n');

    cout << "Program telah selesai dijalankan.\n";
    cout << "Menutup program dalam...\n\n";

    // hitung mundur dari 3 ke 1
    for (int i = 3; i >= 1; i--) {
        cout << i << "..." << endl;                 // tampilkan angka
        this_thread::sleep_for(chrono::seconds(1)); // jeda 1 detik
    }

    cout << "Terimakasih telah menjalankan program ini!!\n";

    return 0;
}
