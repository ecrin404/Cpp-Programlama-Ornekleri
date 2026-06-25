// Kullanıcıdan alınan iki tam sayıdan büyük olanı
// koşullu operatör (? :) kullanarak bulan ve ekrana yazdıran C++ programını yazınız. 

#include <iostream> 
using namespace std;

int main() {
    int x, y;
    cout << "Birinci tam sayiyi giriniz: ";
    cin >> x;
    cout << "İkinci tam sayiyi giriniz: ";
    cin >> y;
    
    int buyukSayi = (x > y) ? x : y;
    cout << "Girilen sayilardan büyük olani: " << buyukSayi << endl;
     
    return 0;
}
