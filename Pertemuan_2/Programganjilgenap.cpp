#include <iostream>
using namespace std;

int main () {
	int angka;
	
	cout << "=== Program Cek Bilangan Ganjil/Genap ===" << endl;
	cout << "Masukkan Angka Yang Ingin Anda Cek: ";
	cin >> angka;
	if (angka % 2 == 0) {
		cout << "Angka Merupakan Bilangan Genap" << endl;
	} else {
		cout << "Angka Merupakan Bilangan Ganjil" << endl;
	}
	
}
