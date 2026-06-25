// Kullanıcıdan alınan iki tam sayıdan en az birinin 10'dan büyük olup olmadığını                                     
// || mantıksal operatatörünü kullanarak kontrol eden C++ programını yazınız.

#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "İki tam sayi giriniz: " << endl;
    cin >> x; 
    cin >> y;
    // cin >> x >> y;

    if(x > 10 || y > 10)
       cout << "Koşul sağlaniyor" << endl;
    else
       cout << "Koşul sağlanamadi" << endl;

    return 0;
}