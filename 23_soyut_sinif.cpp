#include <iostream>
using namespace std;

class Bitki {
protected:
    string ad;

public:
    Bitki(string a) {
        ad = a;
    }
    virtual void sulan() = 0;
    void bilgiGoster() {
        cout << "Bitki: " << ad << endl;
    }
    virtual ~Bitki() {}
};

class Gul : public Bitki {
public:
    Gul(string a) : Bitki(a) {}
    void sulan() override {
        cout << ad << " duzenli olarak sulandi." << endl;
    }
};

class Kaktus : public Bitki {
public:
    Kaktus(string a) : Bitki(a) {}
    void sulan() override {
        cout << ad << " cok az su ile sulandi." << endl;
    }
};

class Orkide : public Bitki {
public:
    Orkide(string a) : Bitki(a) {}
    void sulan() override {
        cout << ad << " nemli ortamda sulandi." << endl;
    }
};

int main() {
    Bitki* b1 = new Gul("Kirmizi Gul");
    Bitki* b2 = new Kaktus("Yesil Kaktus");
    Bitki* b3 = new Orkide("Mor Orkide");

    b1->bilgiGoster();
    b1->sulan();
    cout << endl;

    b2->bilgiGoster();
    b2->sulan();
    cout << endl;

    b3->bilgiGoster();
    b3->sulan();
    cout << endl;

    delete b1;
    delete b2;
    delete b3;

    return 0;
}