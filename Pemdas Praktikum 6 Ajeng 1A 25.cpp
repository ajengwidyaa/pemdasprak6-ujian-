#include <iostream>
using namespace std;

int main()
{
	cout << "Selamat Datang di Toko Unisba Blitar" << endl;
	cout << "====================================" << endl;
	cout<<"\n";

	double harga, diskon, jumlahdiskon, hargasetelahdiskon;

	cout << "Silahkan Masukkan:" << endl;
	cout << "Harga Barang (Rp)=" << endl;
	cin >> harga;

	cout << "Diskon Barang(%)=" << endl;
	cin >> diskon;

	cout<<"Hasil::<<endl;
		
	jumlahdiskon = harga * (diskon / 100);
	cout << "Jumlah diskon=Rp" << jumlahdiskon << endl;

	hargasetelahdiskon = harga - jumlahdiskon;
	cout << "Harga Setelah Diskon=Rp" << hargasetelahdiskon << endl;

	return 0;

}

