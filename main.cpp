#include <iostream>
using namespace std;

// Function pemesanan tiket
void pesanTiket(string tujuan, int harga) {
    int jumlah, total, umur[7];
    string nama[7];
    int i;

    cout << "\nTujuan: " << tujuan << endl;
    cout << "Harga tiket: Rp" << harga << endl;

    cout << "Silahkan memesan tiket, maksimal 7 tiket" << endl;
    cout << "Jumlah Tiket: ";
    cin >> jumlah;

    if (jumlah >= 1 && jumlah <= 7) {
        for (int i = 0; i < jumlah; i++) {
            cout << "Nama penumpang ke "
                 << i + 1 << ": ";
            cin >> nama[i];

            cout << "Umur penumpang: ";
            cin >> umur[i];
        }
    }
    else {
        cout << "Max pemesanan tiket hanya sampai 7";
        return;
    }

    total = harga * jumlah;

    cout << "\n===== DETAIL PEMESANAN =====" << endl;
    cout << "Tujuan: " << tujuan << endl;
    cout << "Harga tiket: Rp" << harga << endl;
    cout << "Jumlah penumpang: " << jumlah << endl;
    cout << "Total pembayaran: Rp" << total << endl;
}

int main() {
    int pilihan;

    cout << "===== PEMESANAN TIKET BUS =====" << endl;
    cout << "1. Malang - Surabaya (Rp35000)" << endl;
    cout << "2. Malang - Pasuruan (Rp20000)" << endl;
    cout << "3. Malang - Jombang (Rp25000)" << endl;

    cout << "\nPilih tujuan (1-3): ";
    cin >> pilihan;

    if (pilihan == 1) {
        pesanTiket("Malang - Surabaya", 35000);
    }
    else if (pilihan == 2) {
        pesanTiket("Malang - Pasuruan", 20000);
    }
    else if (pilihan == 3) {
        pesanTiket("Malang - Jombang", 25000);
    }
    else {
        cout << "Pilihan tidak tersedia!" << endl;
    }

    return 0;
}
