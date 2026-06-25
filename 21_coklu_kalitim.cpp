#include <iostream>
using namespace std;

class Calisan {
public:
    string isim;
    Calisan(string i) {
        isim = i;
        cout << "Calisan constructor: " << isim << endl;
    }
};

class Departman {
public:
    string departmanAdi;
    Departman(string d) {
        departmanAdi = d;
        cout << "Departman constructor: " << departmanAdi << endl;
    }
};

class Mudur : public Calisan, public Departman {
public:
    int maas;
    Mudur(string i, string d, int m) : Calisan(i), Departman(d) {
        maas = m;
        cout << "Mudur constructor: " << maas << endl;
    }
};

int main() {
    Mudur m1("Hasan", "Yazilim", 50000);
    return 0;
}