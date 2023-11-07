#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int baris, kolom;
    int n = 0;
    char lanjut;
    cout << " Nama : Farhan Ainur Rahmat " << endl;
    cout << " NIM  : 2300018026          " << endl;
    cout << " Kelas: A                   " << endl;
    cout << "==============================================" << endl;
    cout << "|| \tUNIVERSITAS AHMAD DAHLAN             || " << endl;
    cout << "==============================================" << endl;
    cout << "|| \tTUGAS DASAR PEMROGRAMAN              || " << endl;
    cout << "==============================================" << endl;
    cout << "|| \tBISSMILAHIRRAHMANNIRROHIM            ||\n";
    cout << "===============================================" << endl;

    do {
        cout << "|| Masukkan Jumlah Baris :  ";
        cin >> baris;
        cout << "==============================" << endl;
        cout << "|| Masukkan Jumlah Kolom :  ";
        cin >> kolom;
        cout << "==============================" << endl;

        while (baris <= 0 || kolom <= 0) {
            cout << "\n Jumlah Baris atau Kolom Tidak Valid, Masukkan Jumlah Baris : ";
            cin >> baris;
            cout << "\n Masukkan Jumlah Kolom : ";
            cin >> kolom;
        }

        for (int i = 0; i < (baris * 2 + 1); i++) {
            for (int j = 0; j < (kolom * 2 + 1); j++) {
                switch (i % 2) {
                    case 0:
                        cout << setw(2) << "_";
                        break;
                    default:
                        switch (j % 2) {
                            case 0:
                                cout << setw(2) << "|";
                                break;
                            default:
                                cout << setw(2) << " ";
                                break;
                        }
                }
            }
            cout << '\n';
        }

        cout << "apakah ingin melanjutkan program nya (Y/T): ";
        cin >> lanjut;

    } while (lanjut == 'Y' || lanjut == 'y');
    cout << "Terima kasih telah menggunakan program kami." << endl;

    return 0;
}