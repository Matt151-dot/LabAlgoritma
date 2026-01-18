#include <iostream>
using namespace std;

void pangkatTiga (int &x) {
	x = x * x * x;
}

int main () {
	int angka;
	cout << "Masukkan sebuah angka = ";
	cin >> angka;
	pangkatTiga(angka);
	cout << "Nilai setelah dipangkatkan tiga " << nilai endl;
	return 0;
}

