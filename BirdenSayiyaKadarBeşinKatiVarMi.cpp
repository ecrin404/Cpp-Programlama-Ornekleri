// Kullanıcıdan bir tam sayı alınız. 
// 1’den girilen sayıya kadar olan sayılar içinde en az bir tane 5’in katı olup olmadığını kontrol ediniz. 
// Bu durumu bir bool bulundu değişkeni ile takip ediniz.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Bir tam sayi giriniz: ";
    cin >> n;

    bool bulundu = false;

    for (int i = 1; i <= n; i++) {
        if (i % 5 == 0) {
            bulundu = true;
            break;
        }
    }

    if (bulundu)
        cout << "Var";
    else
        cout << "Yok";

    return 0; 
}