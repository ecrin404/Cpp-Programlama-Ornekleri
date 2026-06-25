#include <iostream>
using namespace std;

class Sekil {
protected:
    string renk;
    double kenar1, kenar2;

public:
    void setRenk(string r) {
        renk = r;
    }

    void setKenar(double k1, double k2 = 0) {
        kenar1 = k1;
        kenar2 = k2;
    }

    void bilgiver() {
        cout << "Bu seklin rengi: " << renk << endl;
    }
};

class Dikdortgen : public Sekil {
public:
    double alanHesapla() {
        return kenar1 * kenar2;
    }
};

class Ucgen : public Sekil {
public:
    double alanHesapla() {
        return (kenar1 * kenar2) / 2;
    }
};

class Daire : public Sekil {
private:
    double PI = 3.14159;

public:
    double alanHesapla() {
        return PI * kenar1 * kenar1;
    }
};

int main() {
    Dikdortgen d;
    Ucgen u;
    Daire da;

    d.setRenk("Kirmizi");
    u.setRenk("Mavi");
    da.setRenk("Yesil");

    d.setKenar(5, 10);
    u.setKenar(4, 6);
    da.setKenar(3);

    d.bilgiver();
    cout << "Dikdortgen Alani: " << d.alanHesapla() << endl;

    u.bilgiver();
    cout << "Ucgen Alani: " << u.alanHesapla() << endl;

    da.bilgiver();
    cout << "Daire Alani: " << da.alanHesapla() << endl;

    return 0;
}