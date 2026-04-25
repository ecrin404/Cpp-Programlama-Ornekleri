// Kullanıcıdan üç tam sayı alınız. 
// Girilen sayıların en az ikisi pozitifse ekrana “Kosul saglandi” 
// değilse “Kosul saglanmadi” yazdıran C++ programını yazınız. 
// (if–else ve && – || kullanınız.)

#include <iostream>
using namespace std;

int main() {
    int s1, s2, s3;
    cout << "Lutfen uc adet tam sayi giriniz: " << endl;
    cout << "1. sayi: ";
    cin >> s1;
    cout << "2. sayi: ";
    cin >> s2;
    cout << "3. sayi: ";
    cin >> s3;
    
    if((s1 > 0 && s2 > 0) || (s1 > 0 && s3 > 0) || (s2 > 0 && s3 > 0))
        cout << "Kosul saglandi" << endl;
    else
        cout << "Kosul saglanamadi" << endl;

    return 0;
}