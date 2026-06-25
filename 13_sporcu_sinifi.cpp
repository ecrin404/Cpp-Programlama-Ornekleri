#include <iostream>
using namespace std;

class Sporcu {
private:
    string sporcuAdi;
    int yas;
    int puan;

public:
    void setBilgi(string ad, int y, int p) {
        sporcuAdi = ad;
        yas = y;
        puan = p;
    }

    void puanGuncelle(int artis) {
        puan += artis;
    }

    void bilgiYazdir() {
        cout << "Sporcu: " << sporcuAdi << endl;
        cout << "Yas: " << yas << endl;
        cout << "Puan: " << puan << endl << endl;
    }
};

int main() {
    Sporcu *s1 = new Sporcu;
    Sporcu *s2 = new Sporcu;

    s1->setBilgi("Ali", 20, 200);
    s2->setBilgi("Asli", 22, 150);

    s1->puanGuncelle(20);

    s1->bilgiYazdir();
    s2->bilgiYazdir();

    delete s1;
    delete s2;

    return 0;
}