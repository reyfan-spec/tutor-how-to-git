#include <iostream>
using namespace std;

int main() {
    int no, uang ;
cout << "=== VENDING MACHINE AUTOMATION ===" << endl ;
cout << "1. Air Mineral (Rp. 4000)" << endl ;
cout << "2. Teh Botol (Rp. 6000)" << endl ;
cout << "3. Kopi Susu (Rp. 10000)" << endl ;
      cout << "Pilih kode minuman (1-3) : " ; cin >> no ;
      cout << "Masukkan uang (Rp.): " ; cin >> uang ;

      int lembar5, lembar1 ;


      

      switch (no) {
        case 1:
        if (uang >= 4000) {
        cout << "Kembalian : " << (uang - 10000) << endl ;
        cout << "Kembalian : Rp.5000 " << "(" << (uang - 4000)/5000 << ")" << " Rp.1000 " << "(" << ((uang - 4000)/1000) %5 << ")" << endl ;
        cout << "Terima kasih telah membeli Air Mineral" << endl ;
        }else 
            {
                cout << "Uang anda kurang : Rp. " << 4000 - uang << endl ;
            }
            break ;
        case 2:
        if (uang >= 6000) {
        cout << "Kembalian : " << (uang - 10000) << endl ;
        cout << "Kembalian : Rp.5000 " << "(" << (uang - 6000)/5000 << ")" << " Rp.1000 " << "(" << ((uang - 6000)/1000) %5 << ")" << endl ;
        cout << "Terima kasih telah membeli Teh Botol" << endl ;
            } else 
                {
                cout << "Uang anda kurang : Rp. " << 6000 - uang << endl ;
            }
            break ;
        case 3:
        if (uang >= 10000) {
        cout << "Kembalian : " << (uang - 10000) << endl ;
        cout << "Kembalian : Rp.5000 " << "(" << (uang - 10000)/5000 << ")" << " Rp.1000 " << "(" << ((uang - 10000)/1000) %5 << ")" << endl ;
        cout << "Terima kasih telah membeli Kopi Susu" << endl ;
            } else 
                {
                cout << "Uang anda kurang : Rp. " << 10000 - uang << endl ;
            }
            break ;
        default:
            cout << "Kode minuman tidak valid" << endl ;
      }
      return 0 ;
}