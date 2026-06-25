// Kullanıcıdan bir tam sayı alınız.  
// Girilen sayının 10 ile 50 arasında olup olmadığını bir bool değişkende tutunuz.
// Sonuca göre ekrana “Aralik içinde” ya da “Aralik dışında” yazdırınız.  
// (bool, &&, if–else kullanınız.)

#include <iostream>
using namespace std;

int main() {
    int sayi;
    
    cout << "Bir tam sayi giriniz: ";
    cin >> sayi;
    
    bool aralikİcindeMi = (sayi >=10 && sayi <= 50);
    
    if(aralikİcindeMi)
        cout << "Aralik İcinde";
    else
        cout << "Aralik Disinda";
    
    return 0;
}