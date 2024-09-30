#include <iostream>

using namespace std;

int main(){
    int nilai;
    cout << "Masukkan nilai: ";
    while (!(cin >> nilai)) {
        cout << "Input salah. Silakan masukkan nilai lagi: ";
        cin.clear();
    }
    if (nilai > 79) {
        cout << "A" << endl;
    } else {
        cout << "Bukan A" << endl;
    }
    return 0;
}