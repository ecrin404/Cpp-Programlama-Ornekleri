/*
+--------------------------------------------------------------+
|                            Kumas                             |
+--------------------------------------------------------------+
| - urunAdi            : String                                |
| - tur                : String                                |
| - pamukOrani         : double                                |
| - bambuOrani         : double                                |
| - polyesterOrani     : double                                |
+--------------------------------------------------------------+
| + Kumas()                                                    |
| + Kumas(urunAdi : String, tur : String,                      |
|          pamukOrani : double, bambuOrani : double,           |
|          polyesterOrani : double)                            |
+--------------------------------------------------------------+
| + setUrunAdi(urunAdi : String)               : void          |
| + setTur(tur : String)                       : void          |
| + setPamukOrani(pamukOrani : double)         : void          |
| + setBambuOrani(bambuOrani : double)         : void          |
| + setPolyesterOrani(polyesterOrani : double) : void          |
|--------------------------------------------------------------|
| + getUrunAdi()           : String                            |
| + getTur()               : String                            |
| + getPamukOrani()        : double                            |
| + getBambuOrani()        : double                            |
| + getPolyesterOrani()    : double                            |
+--------------------------------------------------------------+
| + toplamOranHesapla()    : double                            |
| + saglikliMi()           : String                            |
| + bilgileriYazdir()      : void                              |
+--------------------------------------------------------------+
*/

#include <iostream>
using namespace std;

class Kumas{
private:
    string urunAdi;
    string tur;
    double pamukOrani;
    double bambuOrani;
    double polyesterOrani;

public:
    Kumas() {
        this -> urunAdi = "";
        this -> tur = "";
        this -> pamukOrani = 0.0;
        this -> bambuOrani = 0.0;
        this -> polyesterOrani = 0.0;
    }
    
    Kumas(string urunAdi, string tur, double pamukOrani, double bambuOrani, double polyesterOrani) {
        this -> urunAdi = urunAdi;
        this -> tur = tur;
        this -> pamukOrani = pamukOrani;
        this -> bambuOrani = bambuOrani;
        this -> polyesterOrani = polyesterOrani;
    }
    
    void setUrunAdi(string urunAdi) {
        this -> urunAdi = urunAdi;
    }
    
    void setTur(string tur) {
        this -> tur = tur;
    }
    
    void setPamukOrani(double pamukOrani) {
        this -> pamukOrani = pamukOrani;
    }
    
    void setBambuOrani(double bambuOrani) {
        this -> bambuOrani = bambuOrani;
    }
    
    void setPolyesterOrani(double polyesterOrani) {
        this -> polyesterOrani = polyesterOrani;
    }
    
    string getUrunAdi() {
        return urunAdi;
    }
    
    string getTur() {
        return tur;
    }
    
    double getPamukOrani() {
        return pamukOrani;
    }
    
    double getBambuOrani() {
        return bambuOrani;
    }
    
    double getPolyesterOrani() {
        return polyesterOrani;
    }
    
    double toplamOranHesapla() {
        return pamukOrani + bambuOrani + polyesterOrani;
    }
    
    string saglikliMi() {
        double pamukBambuToplami = this -> pamukOrani + this -> bambuOrani;
        
        if(pamukBambuToplami >= 50.0) {
            return "Saglikli";
        } else {
            return "Saglikli Degil";
        }
    }
    
    void bilgileriYazdir() {
        cout << "------ Kumas Bilgileri -------" << endl;
        cout << "Urun Adi: " << this -> getUrunAdi() << endl;
        cout << "Turu: " << this -> getTur() << endl;
        cout << "Pamuk Orani: " << this -> getPamukOrani() << endl;
        cout << "Bambu Orani: " << this -> getBambuOrani() << endl;
        cout << "Polyester Orani: " << this -> getPolyesterOrani() << endl;
        cout << "Toplam Oran: %" << this -> toplamOranHesapla() << endl;
        cout << "Saglik Durumu: " << this -> saglikliMi() << endl;
        cout << "------------------------------" << endl;
    }
};

int main() {
    
    Kumas k1;
    k1.setUrunAdi("Tisort");
    k1.setTur("Orme");
    k1.setPamukOrani(75.0);
    k1.setBambuOrani(15.0);
    k1.setPolyesterOrani(10.0);
    
    Kumas k2("Eşofman Alti", "Dokuma", 25.0, 10.0, 65.0);
    
    k1.bilgileriYazdir();
    cout << endl;
    k2.bilgileriYazdir();

    return 0;
}

