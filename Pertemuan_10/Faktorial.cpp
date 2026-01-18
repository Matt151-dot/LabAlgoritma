#include <iostream>
using namespace std;

int faktorial(int n){
	int hasil = 1;
	for(int i = 2; i <= n; i++){
		hasil *= i;
	}
	return hasil;
}

int main(){
	int angka;
	cout <<"Masukkan angka: "<<endl;
	cin >> angka;
	
	int hasil = faktorial(angka);
	cout <<"Hasil faktorial dari = " << angka << "adalah: " << hasil <<endl;
	
	return 0;
}
