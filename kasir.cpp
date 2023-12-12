#include <iostream>

using namespace std;

int main() {
	int kode, pri, jml, tot, byr, kbl;
	char mad;
	
	
	do {
		cout << endl << endl;
		cout << "		=========================		"<< endl;
		cout << "		\t CAFE ALAY		"<< endl;
		cout << "		\tMENU MINUMAN		"<< endl;
		cout << "       \t\t Aplikasi Kasir Cafe		"<< endl;
		cout << "		=========================		"<< endl;
		cout << endl;
		cout << "Menu Minuman					Harga"<< endl;
		cout << "1. BOBA						Rp. 15.000"<< endl;
		cout << "2. CAPPUCINO					Rp. 10.000"<< endl;
		cout << "3. COFFEE					Rp. 8.000"<< endl;
		cout << "4. LEMON TEA					Rp. 6.000"<< endl;
		cout << endl;
		cout << "MASUKKAN PILIHAN ANDA : ";
		cin >> kode;
		
		switch(kode) {
			case 1:
				cout << "BOBA" << endl;
				pri = 15000;
				cout << "Masukkan Jumlah: ";
				cin >> jml;
					tot = pri* jml;
				cout << "Total Harga: Rp. " << tot << endl << endl;
				cout << "DBAYAR : Rp. ";;
				cin >> byr;
					kbl = byr - tot;
					cout << "KEMBALI : Rp. " << kbl << endl;
					cout << "Masih ada? Y/T : ";
					cin >> mad;
				break;
				
				case 2:
				cout << "CAPPUCINO" << endl;
				pri = 10000;
				cout << "Masukkan Jumlah: ";
				cin >> jml;
					tot = pri* jml;
				cout << "Total Harga: Rp. " << tot << endl << endl;
				cout << "DBAYAR : Rp. ";;
				cin >> byr;
					kbl = byr - tot;
					cout << "KEMBALI : Rp. " << kbl << endl;
					cout << "Masih ada? Y/T : ";
					cin >> mad;
				break;
				
				case 3:
				cout << "COFFEE" << endl;
				pri = 8000;
				cout << "Masukkan Jumlah: ";
				cin >> jml;
					tot = pri* jml;
				cout << "Total Harga: Rp. " << tot << endl << endl;
				cout << "DBAYAR : Rp. ";;
				cin >> byr;
					kbl = byr - tot;
					cout << "KEMBALI : Rp. " << kbl << endl;
					cout << "Masih ada? Y/T : ";
					cin >> mad;
				break;
				
				case 4:
				cout << "LEMON TEA" << endl;
				pri = 6000;
				cout << "Masukkan Jumlah: ";
				cin >> jml;
					tot = pri* jml;
				cout << "Total Harga: Rp. " << tot << endl << endl;
				cout << "DBAYAR : Rp. ";;
				cin >> byr;
					kbl = byr - tot;
					cout << "KEMBALI : Rp. " << kbl << endl;
					cout << "Masih ada? Y/T : ";
					cin >> mad;
				break;
				
				default:
					cout << "Kode yang anda masukkan tidak ada";
		}	
	} while (mad /= 'Y');
	cout << "Terima kasih atas kunjungan anda";
	cout << "Sampai jumpa kembali";
	return 0;
}
