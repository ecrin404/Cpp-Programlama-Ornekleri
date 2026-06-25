#include <iostream>
using namespace std;

class Insan {
protected:
    string ad;
    int yas;
    int id;

public:
    Insan(string a, int y, int i) {
        ad = a;
        yas = y;
        id = i;
    }

    void yazdir() {
        cout << "Ad: " << ad << endl;
        cout << "Yas: " << yas << endl;
        cout << "Id: " << id << endl;
    }
};

class Ogrenci : public Insan {
private:
    string bolum;

public:
    Ogrenci(string a, int y, int i, string b) : Insan(a, y, i) {
        bolum = b;
    }

    void yazdir() {
        Insan::yazdir();
        cout << "Bolum: " << bolum << endl;
    }

    void dersKayit(string ders) {
        cout << ders << " dersine kayit olundu." << endl;
    }
};

class Calisan : public Insan {
private:
    double maas;

public:
    Calisan(string a, int y, int i, double m) : Insan(a, y, i) {
        maas = m;
    }

    void yazdir() {
        Insan::yazdir();
        cout << "Maas: " << maas << endl;
    }

    void zamHesapla(double oran) {
        maas = maas + (maas * oran);
        cout << "Yeni maas: " << maas << endl;
    }
};

int main() {
    Ogrenci o1("Ayse", 20, 101, "Bilgisayar");
    Calisan c1("Mehmet", 35, 201, 10000);

    o1.yazdir();
    o1.dersKayit("Algoritma");
    cout << endl;

    c1.yazdir();
    c1.zamHesapla(0.2);

    return 0;
}