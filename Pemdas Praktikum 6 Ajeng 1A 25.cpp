#include <iostream>
using namespace std;

int main()
{
	cout << "Selamat Datang di Toko Unisba Blitar" << endl;
	cout << "====================================" << endl;

	double harga, diskon, jumlahdiskon, hargasetelahdiskon;

	cout << "Silahkan Masukkan:" << endl;
	cout << "Harga Barang (Rp)=" << endl;
	cin >> harga;

	cout << "Diskon Barang(%)=" << endl;
	cin >> diskon;

	jumlahdiskon = harga * (diskon / 100);
	cout << "Jumlah Diskon=Rp" << jumlahdiskon << endl;

	hargasetelahdiskon = harga - jumlahdiskon;
	cout << "Harga Setelah Diskon=Rp" << hargasetelahdiskon << endl;

	return 0;
}