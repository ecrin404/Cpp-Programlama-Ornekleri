// Kullanıcıdan bir tam sayı alınız. 
// Bu sayının basamak sayısını while döngüsü kullanarak bulan ve ekrana yazdıran C++ programını yazınız.

#include <iostream>
using namespace std;

int main() {
    int n;
    int sayac = 0;
    cout << "Bir tam sayi giriniz: ";
    cin >> n;

    if(n == 0)
        sayac = 1;
    else
        while(n != 0) {
            n = n / 10;
            sayac++;
        }
    
    cout << "Girilen sayinin basamak sayisi: ";
    cout << sayac;

    return 0;
}
