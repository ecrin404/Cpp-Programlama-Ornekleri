/*  
+--------------------------------------------------+
|                     Siparis                      |
+--------------------------------------------------+
| - siparisNo   : int                              |
| - musteriAdi  : string                           |
| - urunAdi     : string                           |
| - adet        : int                              |
| - birimFiyat  : double                           |
+--------------------------------------------------+
| + Siparis(int no, string musteri, string urun,   |
|           int a, double fiyat) : void            |
| + toplamTutarHesapla() : double                  |
| + siparisYazdir()       : void                   |
+--------------------------------------------------+
*/

#include <iostream>
using namespace std;

class Siparis {
private: 
	int siparisNo;
	string musteriAdi;
	string urunAdi;
	int adet;
	double birimFiyat;
public:
	Siparis(int no, string musteri, string urun, int a, double fiyat) {
		siparisNo = no;
		musteriAdi = musteri;
		urunAdi = urun;
		adet = a;
		birimFiyat = fiyat;
	}

	double toplamTutarHesapla() {
		return adet * birimFiyat;
	}

	void siparisYazdir() {
		cout << "Siparis No: " << siparisNo << endl;
		cout << "Musteri Adi: " << musteriAdi << endl;
		cout << "Urun Adi: " << urunAdi << endl;
		cout << "Adet: " << adet << endl;
		cout << "Birim Fiyat: " << birimFiyat << endl;
		cout << "Toplam Tutar: " << toplamTutarHesapla() << endl;
        }
};

int main() {
    Siparis s1(101, "Selim Işik", "Pizza", 2, 150.0);
    s1.siparisYazdir();

    return 0;
}