// Kullanıcıdan alınan bir tam sayıyı önce 1 artırıp (++),
// daha sonra bu değerin 2 katını ekrana yazdıran C++ programını yazınız. 

#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Bir tam sayi giriniz: ";
    cin >> x;

    ++x;

    int deger = 2 * x;
    
    cout << "Girdiğiniz sayinin 1 fazlasinin 2 kati: " << deger << endl;
    return 0;
}
