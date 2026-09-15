#include <iostream>

using namespace std ;
int main () {
    int na, nb ;
    int n = 1 ;
    for (int n =1 ; n<= 5 ; n++){
    cout << "Murid ke-" << n << endl ;
    cout << "Masukan Nilai A : " ;
    cin >> na ;

    if (na == 100) {
        cout << "Perwakilan ditemukan" ;
        break ;
    }
    else if (na >= 80 && na < 100) {
        cout << "Masukan Nilai B : " ;
        cin >> nb ;
        if (nb > 90) {
            cout << "Perwakilan ditemukan" ;
            break ;
        }
    }  else { 
        cout << "Murid di lewati" << endl;
        cout << " " << endl;
        continue ;
         ;
    } 
 }
 cout << "Program Terhenti" << endl ;
return 0 ;
}