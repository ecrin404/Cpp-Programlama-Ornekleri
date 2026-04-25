/*
Verilen UML diyagramına göre sınıfları C++ dilinde gerçekleştiriniz.

İstenilenler:
- Insan, Ogrenci ve Calisan sınıflarını oluşturunuz.
- UML diyagramında verilen tüm değişkenleri uygun erişim belirleyicilerle tanımlayınız.
- Her sınıf için constructor (kurucu) fonksiyonları yazınız.
- Her sınıfta yazdir() fonksiyonunu tanımlayarak nesne bilgilerini ekrana yazdırınız.
- Ogrenci sınıfına dersKayit(string ders) fonksiyonunu ekleyiniz.
- Calisan sınıfına zamHesapla(double oran) fonksiyonunu ekleyiniz.

main fonksiyonunda:
- Bir Ogrenci ve bir Calisan nesnesi oluşturunuz.
- Fonksiyonları çağırarak programı test ediniz.
*/


/*
+--------------------------------------------------------------+
|                           Insan                              |
+--------------------------------------------------------------+
| # ad                 : string                                |
| # yas                : int                                   |
| # id                 : int                                   |
+--------------------------------------------------------------+
| + Insan(a : string, y : int, i : int)                        |
| + yazdir()             : void                                |
+--------------------------------------------------------------+
                             ▲
                             |
        --------------------------------------------------
        |                                                |
+-------------------------------+      +-------------------------------+
|           Ogrenci             |      |           Calisan             |
+-------------------------------+      +-------------------------------+
| - bolum            : string   |      | - maas             : double   |
+-------------------------------+      +-------------------------------+
| + Ogrenci(a,y,i,b)            |      | + Calisan(a,y,i,m)            |
| + yazdir()       : void       |      | + yazdir()       : void       |
| + dersKayit(ders): void       |      | + zamHesapla(o)  : void       |
+-------------------------------+      +-------------------------------+
*/

#include <iostream>
using namespace std;

class Insan {
protected:
    string ad;
    int yas;
    int id;

public:
    Insan(string a, int y, int i){
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
        cout << "Ad: " << ad << endl;
        cout << "Yas: " << yas << endl;
        cout << "Id: " << id << endl;
        cout << "Bolum: " << bolum << endl;
    }
    
    void dersKayit(string ders) {
        cout << ad << " isimli ogrenci " << ders << " dersine kayit oldu." << endl;
    }
};

class Calisan : public Insan {
private: 
    double maas;
public:
    Calisan(string a, int y, int i, double m) : Insan(a, y, i) {
        maas = m;
    }
    
    void zamHesapla(double oran) {
        maas += maas * (oran / 100.0);
        cout << "Yeni maas (%" << oran << " zamli): " << maas << " TL" << endl;
    }
};

int main() {
    Ogrenci ogr("Elif Erol", 20, 101, "Yazilim Muhendisligi");
    Calisan cal("Ayse Isik", 35, 202, 45000.0);
    
    cout << "--- Ogrenci Bilgileri ---" << endl;
    ogr.yazdir();
    ogr.dersKayit("Programlama");
    
    cout << endl << endl;
    
    cout << "--- Calisan Bilgileri ---" << endl;
    cal.yazdir();
    cal.zamHesapla(25.0);

    return 0;
}