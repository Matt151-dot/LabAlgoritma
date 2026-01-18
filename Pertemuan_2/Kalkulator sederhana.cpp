#include <iostream>
using namespace std;

int main () {
	
	double a, b, hasil;
	char op;
	char ulang;
	
	do {
		cout << "=== Kalkulator Sederhana ===" << endl;
		cout << "1. Penjumlahan (+)" << endl;
		cout << "2. Pengurangan (-)" << endl;
		cout << "3. Perkalian (*)" << endl;
		cout << "4. Pembagian (/)" << endl;
		cout << "Pilih Operasi Kalkulator Yang Diinginkan (+, -, *, /): ";
		cin >> op;
		
		cout << "Masukan angka pertama : ";
		cin >> a;
		cout << "Masukan angka kedua : ";
		cin >> b;
		
		switch (op) {
			case '+':
				hasil = a + b;
				break;
			case '-':
				hasil = a - b;
				break;
			case '*':
				hasil = a * b;
				break;
			case '/':
				hasil = a / b;
				break;
		}
		cout << "Hasil Operasi Anda Adalah: " << hasil << endl;
		cout << "\nApakah Anda Ingin Menghitung Lagi? (Y/N)";
		cin >> ulang;
		cout << endl;

	}while (ulang == 'Y' ||ulang == 'y');
	
}
