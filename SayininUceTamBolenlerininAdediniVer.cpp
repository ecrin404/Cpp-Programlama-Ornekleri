// Kullanıcıdan bir tam sayı alınız. 
// 0’dan bu sayıya kadar olan sayılar içinde 3’e tam bölünenlerin adedini bulan ve ekrana yazdıran C++ programını yazınız. 

#include <iostream>
using namespace std;

int main() {
    int n;
    int sayac = 0;
    cout << "Bir tam sayi giriniz: ";
    cin >> n;

    for(int i = 0; i <= n; i++)
        if(i % 3 == 0)
            sayac++;
    cout << "0'dan " << n << " sayisina kadar olan 3'e tam bölünenlerin adedi: " << sayac;

    return 0;
}
