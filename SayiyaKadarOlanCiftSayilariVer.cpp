// Kullanıcıdan bir pozitif tam sayı alınız. 
// 1’den girilen sayıya kadar olan çift sayıları ekrana yazdıran C++ programını yazınız.  
// (for döngüsü kullanınız.)

#include <iostream>
using namespace std;

int main() {
    int sayi;
    
    cout << "Pozitif bir tam sayi giriniz: ";
    cin >> sayi;
    
    cout << "1'den " << sayi << " sayisina kadar olan cift sayilar: " << endl;
    
    for(int i = 1; i <= sayi; i++)
        if(i % 2 == 0)
            cout << i << " ";
            
    return 0;
}