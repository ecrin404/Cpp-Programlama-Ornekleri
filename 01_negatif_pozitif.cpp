// Kullanıcıdan bir tam sayı alınız. 
// Sayının negatif olup olmadığını bir bool değişkende tutunuz.
// Koşullu operatör (? :) ile  "Negatif" ya da "Pozitiftir" şeklinde ekrana yazdırınız. 
// (bool ve ? : birlikte kullanılacaktır.)

#include <iostream>
using namespace std;

int main() {
    int sayi;
    
    cout << "Bir tam sayi giriniz: ";
    cin >> sayi;
    
    bool sayiNegatifMi = (sayi < 0);
    
    cout << (sayiNegatifMi ? "Negatif" : "Negatif Degil");

    return 0;
}