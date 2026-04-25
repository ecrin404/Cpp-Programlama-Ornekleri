// Kullanıcıdan bir tam sayı alınız. 
// Sayı çift ise “Cift”, tek ise “Tek” yazdıran C++ programını 
// sadece koşullu operatör (? :) kullanarak yazınız.

#include <iostream>
using namespace std;

int main() {
    int sayi;
    
    cout << "Bir tam sayi giriniz: ";
    cin >> sayi;
    
    cout << "Sonuc : " << (sayi % 2 == 0 ? "Cift" : "Tek");

    return 0;
}