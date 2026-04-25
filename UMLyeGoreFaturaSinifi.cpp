/*
+--------------------------------------------------------------+
|                           Fatura                             |
+--------------------------------------------------------------+
| - faturaNo          : string                                 |
| - musteriAdi        : string                                 |
| - kdvOrani          : double                                 |
| - araToplam         : double                                 |
+--------------------------------------------------------------+
| + Fatura(no : string, musteri : string,                      |
|          kdv : double, ara : double)                         |
+--------------------------------------------------------------+
| + getFaturaNo()        : string                              |
| + getMusteriAdi()      : string                              |
| + getKdvOrani()        : double                              |
| + getAraToplam()       : double                              |
|--------------------------------------------------------------|
| + setFaturaNo(no : string)        : void                     |
| + setMusteriAdi(musteri : string) : void                     |
| + setKdvOrani(oran : double)      : void                     |
| + setAraToplam(tutar : double)    : void                     |
+--------------------------------------------------------------+
| + kdvHesapla()         : double                              |
| + genelToplam()        : double                              |
| + faturaYazdir()       : void                                |
+--------------------------------------------------------------+
*/

#include <iostream>
using namespace std;

class Fatura {
private:
    string faturaNo;
    string musteriAdi;
    double kdvOrani;
    double araToplam;
public:
    Fatura(string no, string musteri, double kdv, double ara) {
    faturaNo = no;
    musteriAdi = musteri;
    setKdvOrani(kdv);
    setAraToplam(ara);
    }
    
    string getFaturaNo() { return faturaNo; }
    string getMusteriAdi() { return musteriAdi; }
    double getKdvOrani() { return kdvOrani; }
    double getAraToplam() { return araToplam; }
    void setFaturaNo(string no) { faturaNo = no; }
    void setMusteriAdi(string musteri) { musteriAdi = musteri; }
    
    void setKdvOrani(double oran) {
    if (oran >= 0 && oran <= 1)
    kdvOrani = oran;
    else
    cout << "Dikkat Gecersiz KDV orani! (0-1 arasinda olmali)" << endl;
    }
    
    void setAraToplam(double tutar) {
    if (tutar >= 0)
    araToplam = tutar;
    else
    cout << "Dikkat Ara toplam negatif olamaz!" << endl;
    }
    
    double kdvHesapla() { return araToplam * kdvOrani; }
    double genelToplam() { return araToplam + kdvHesapla(); }
    void faturaYazdir() {
    cout << "======== FATURA ========" << endl;
    cout << "Fatura No : " << faturaNo << endl;
    cout << "Musteri : " << musteriAdi << endl;
    cout << "Ara Toplam : " << araToplam << " TL" << endl;
    cout << "KDV (%" << (int)(kdvOrani * 100) << ") : " << kdvHesapla() << " TL" << endl;
    cout << "GENEL TOP : " << genelToplam() << " TL" << endl;
    cout << "========================" << endl << endl;

    }
};

int main() {
    Fatura f("F-2024-001", "Mehmet Şen", 0.18, 1000.0);
    f.faturaYazdir();
    
    f.setAraToplam(2500.0);
    f.faturaYazdir();
    
    f.setKdvOrani(1.5); // Gecersiz atama
    cout << "KDV orani hala: " << f.getKdvOrani() << endl;
    
    return 0;
}