/*
Aşağıda UML diyagramı verilen sınıf yapısını C++ dilinde gerçekleştiriniz.

Sistemde ortak özelliklere sahip farklı bina türleri bulunmaktadır.
Bu nedenle Bina adında temel sınıf tanımlanacaktır.
Apartman, Okul ve Hastane sınıfları Bina sınıfından kalıtım alacaktır.

main fonksiyonunda:
- bir Apartman,
- bir Okul,
- bir Hastane nesnesi oluşturunuz,
- nesnelere setter metotları ile değer atayınız,
- bilgileri ekrana yazdırınız.
*/


/*
+--------------------------------------------------------------+
|                            Bina                              |
+--------------------------------------------------------------+
| # katSayisi         : int                                    |
| # metrekare         : int                                    |
| # bahceVarMi        : bool                                   |
| # otoparkVarMi      : bool                                   |
+--------------------------------------------------------------+
| + Bina()                                                     |
| + setKatSayisi(katSayisi : int)          : void              |
| + getKatSayisi()                         : int               |
| + setMetrekare(metrekare : int)          : void              |
| + getMetrekare()                         : int               |
| + setBahceVarMi(bahceVarMi : bool)       : void              |
| + getBahceVarMi()                        : bool              |
| + setOtoparkVarMi(otoparkVarMi : bool)   : void              |
| + getOtoparkVarMi()                      : bool              |
| + bilgiYazdir()                          : void              |
+--------------------------------------------------------------+
                             ▲
          -----------------------------------------
          |                   |                   |
+----------------+  +----------------+  +------------------+
|   Apartman     |  |     Okul       |  |    Hastane       |
+----------------+  +----------------+  +------------------+
| - daireSayisi  |  | - sinifSayisi  |  | - yatakSayisi    |
|   : int        |  |   : int        |  |   : int          |
+----------------+  +----------------+  +------------------+
| + Apartman()   |  | + Okul()       |  | + Hastane()      |
| + setDaire...  |  | + setSinif...  |  | + setYatak...    |
| + getDaire...  |  | + getSinif...  |  | + getYatak...    |
| + bilgiYazdir()|  | + bilgiYazdir()|  | + bilgiYazdir()  |
+----------------+  +----------------+  +------------------+
*/

#include <iostream>
using namespace std;

class Bina{
protected: 
    int katSayisi;
    int metrekare;
    bool bahceVarMi;
    bool otoparkVarMi;

public:
    Bina() {}
    
    void setKatSayisi(int katSayisi) {
        this -> katSayisi = katSayisi;
    }
    int getKatSayisi() {
        return katSayisi;
    }
    void setMetrekare(int metrekare) {
        this -> metrekare = metrekare;
    }
    int getMetrekare() {
        return metrekare;
    }
    void setBahceVarMi(bool bahceVarMi) {
        this -> bahceVarMi = bahceVarMi;
    }
    bool getBahceVarMi() {
        return bahceVarMi;
    }
    void setOtoparkVarMi(bool otoparkVarMi) {
        this -> otoparkVarMi = otoparkVarMi;
    }
    bool getOtoparkVarMi() {
        return otoparkVarMi;
    }
    
    void bilgiYazdir() {
        cout << "Kat Sayisi: " << katSayisi << endl;
        cout << "Metrekare: " << metrekare << endl;
        cout << "Bahce: " << (bahceVarMi ? "Var" : "Yok") << endl;
        cout << "Otopark: " << (otoparkVarMi ? "Var" : "Yok") << endl;
    }
};

class Apartman : public Bina {
private:
    int daireSayisi;
public:
    Apartman() {}
    
    void setDaireSayisi(int daireSayisi) {
        this -> daireSayisi = daireSayisi;
    }
    int getDaireSayisi() {
        return daireSayisi;
    }
    void bilgiYazdir() {
        cout << "--- Apartman Bilgileri ---" << endl;
        cout << "Kat Sayisi: " << katSayisi << endl;
        cout << "Metrekare: " << metrekare << endl;
        cout << "Bahce: " << (bahceVarMi ? "Var" : "Yok") << endl;
        cout << "Otopark: " << (otoparkVarMi ? "Var" : "Yok") << endl;
        cout << "Daire Sayisi: " << daireSayisi << endl;
    }
};

class Okul : public Bina {
private:
    int sinifSayisi;
public:
    Okul() {}
    
    void setSinifSayisi(int sinifSayisi) {
        this -> sinifSayisi = sinifSayisi;
    }
    int getSinifSayisi() {
        return sinifSayisi;
    }
    void bilgiYazdir() {
        cout << "--- Okul Bilgileri ---" << endl;
        cout << "Kat Sayisi: " << katSayisi << endl;
        cout << "Metrekare: " << metrekare << endl;
        cout << "Bahce: " << (bahceVarMi ? "Var" : "Yok") << endl;
        cout << "Otopark: " << (otoparkVarMi ? "Var" : "Yok") << endl;
        cout << "Sinif Sayisi: " << sinifSayisi << endl;
    }
};

class Hastane : public Bina {
private:
    int yatakSayisi;
public:
    Hastane() {}
    
    void setYatakSayisi(int yatakSayisi){
        this -> yatakSayisi = yatakSayisi;
    }
    int getYatakSayisi(){
        return yatakSayisi;
    }
    void bilgiYazdir(){
        cout << "--- Hastane Bilgileri ---" << endl;
        cout << "Kat Sayisi: " << katSayisi << endl;
        cout << "Metrekare: " << metrekare << endl;
        cout << "Bahce: " << (bahceVarMi ? "Var" : "Yok") << endl;
        cout << "Otopark: " << (otoparkVarMi ? "Var" : "Yok") << endl;
        cout << "Yatak Sayisi: " << yatakSayisi << endl;
    }
};

int main() {
    Apartman apt;
    apt.setKatSayisi(6);
    apt.setMetrekare(900);
    apt.setBahceVarMi(true);
    apt.setOtoparkVarMi(true);
    apt.setDaireSayisi(30);
    
    Okul okul;
    okul.setKatSayisi(3);
    okul.setMetrekare(3000);
    okul.setBahceVarMi(true);
    okul.setOtoparkVarMi(false);
    okul.setSinifSayisi(40);
    
    Hastane hastane;
    hastane.setKatSayisi(10);
    hastane.setMetrekare(15000);
    hastane.setBahceVarMi(false);
    hastane.setOtoparkVarMi(true);
    hastane.setYatakSayisi(650);
    
    apt.bilgiYazdir();
    cout << endl;
    okul.bilgiYazdir();
    cout << endl;
    hastane.bilgiYazdir();

    return 0;
}