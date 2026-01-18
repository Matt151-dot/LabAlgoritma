#include <iostream>
using namespace std;

int main()
{
	int luas, panjang, lebar;
	cout << "Menghitung luas persegi panjang";
	
	cout << "\nnilai panjang persegi = "; cin >> panjang;
	cout << "nilai lebar persegi = "; cin >> lebar;
	
	luas = panjang * lebar;

	cout << "\nHasil luas persegi panjang adalah = " <<luas;
	
	return 0;
}
