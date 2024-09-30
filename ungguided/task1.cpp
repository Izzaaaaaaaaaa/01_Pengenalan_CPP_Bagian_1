#include <iostream>

using namespace std;

int main(){

    float bil1, bil2;

    cout << "Masukkan angka pertama : ";
    cin >> bil1;
    cout << "Masukkan angka kedua : ";
    cin >> bil2;

    float hasiltambah =  bil1 + bil2;
    cout << "Hasil Penjumlahan : " << hasiltambah << endl;

    float hasilkurang = bil1 - bil2;
    cout << "Hasil Pengurangan : " << hasilkurang << endl;

    float hasilkali = bil1 * bil2;
    cout << "Hasil Perkalian : " << hasilkali << endl;

    if (bil2 != 0) {
        float hasilbagi = bil1 / bil2;
        cout << "Hasil Pembagian : " << hasilbagi << endl;
    } else {
        cout << "Tidak Bisa Dibagi 0!!" << endl;
    }

    return 0;
}
