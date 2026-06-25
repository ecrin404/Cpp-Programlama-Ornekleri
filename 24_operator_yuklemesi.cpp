#include <iostream>
using namespace std;

class Saat {
private:
    int saat;
    int dakika;

public:
    Saat(int s = 0, int d = 0) {
        saat = s;
        dakika = d;
    }

    void yazdir() {
        if (saat < 10) cout << "0";
        cout << saat << ":";
        if (dakika < 10) cout << "0";
        cout << dakika << endl;
    }

    // Dakika eklemek icin + operatorunun asiri yuklenmesi
    Saat operator+(int dk) {
        Saat gecici;
        gecici.saat = saat;
        gecici.dakika = dakika + dk;
        
        if (gecici.dakika >= 60) {
            gecici.saat += gecici.dakika / 60;
            gecici.dakika = gecici.dakika % 60;
        }
        if (gecici.saat >= 24) {
            gecici.saat = gecici.saat % 24;
        }
        return gecici;
    }
};

int main() {
    Saat s1(10, 45);
    Saat sonuc = s1 + 15;
    sonuc.yazdir(); // Çıktı: 11:00 olacaktır
    return 0;
}