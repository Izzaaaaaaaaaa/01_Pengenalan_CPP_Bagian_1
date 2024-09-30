#include <iostream>
#include <string>

using namespace std;

string terbilang(int angka) {
    string satuan[10] = {"", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan"};
    string belasan[10] = {"sepuluh", "sebelas", "dua belas", "tiga belas", "empat belas", "lima belas", "enam belas", "tujuh belas", "delapan belas", "sembilan belas"};
    string puluhan[10] = {"", "", "dua puluh", "tiga puluh", "empat puluh", "lima puluh", "enam puluh", "tujuh puluh", "delapan puluh", "sembilan puluh"};

    if (angka < 0 || angka > 100) {
        return "Angka di luar rentang!";
    } else if (angka == 0) {
        return "nol";
    } else if (angka < 10) {
        return satuan[angka];
    } else if (angka < 20) {
        return belasan[angka - 10];
    } else {
        return puluhan[angka / 10] + ((angka % 10 != 0) ? " " + satuan[angka % 10] : "");
    }
}

int main() {
    int angka;

    cout << "Masukkan angka (0-100): ";
    cin >> angka;

  cout << angka << " : " << terbilang(angka) << endl;

    return 0;
}