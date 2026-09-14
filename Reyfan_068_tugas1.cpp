#include <iostream>
using namespace std;

int main () {
    float belanja, dis, total ;
    cout << "=== KALKULATOR KASIR TOKO BUKU ===" << endl ;
    cout << "Masukkan total belanja (Rp): "; cin >> belanja ;
    cout << "--- RINGKASAN PEMBAYARAN ---" << endl ;

if (belanja >= 300000) {
    dis = belanja * 0.2 ;
    total = belanja - dis ;
    cout << "Diskon (20%) : Rp " << dis << endl ;
    cout << "Total bayar : Rp " << total << endl ;
}
else if (belanja > 99999 && belanja < 300000) {
    dis = belanja * 0.1 ;
    total = belanja - dis ;
    cout << "Diskon (10%) : Rp " << dis << endl ;
    cout << "Total bayar : Rp " << total << endl ;
}
else {
    dis = 0 ;
    total = belanja - dis ;
    cout << "Diskon (0%) : Rp " << dis << endl ;
    cout << "Total bayar : Rp " << total << endl ;



}
return 0 ;
}