// Kullanıcıdan alınan bir tam sayının pozitif, negatif veya sıfır olma durumunu 
// if-else blokları kullanarak ekrana yazdıran C++ programını yazınız.

#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Bir tam sayi giriniz: " << endl;
    cin >> x;
    
    if(x > 0)
       cout << "Sayi pozitiftir" << endl;
    else if(x < 0)
       cout << "Sayi negatiftir" << endl;
    else {
       cout << "Sayi sifirdir" << endl;
    }   
    return 0;
}
