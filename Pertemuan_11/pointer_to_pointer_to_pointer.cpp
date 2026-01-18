int main() {
	int ilham;
	int *raka;
	int **amir;
	int ***bob;
	
	ilham = 75;
	cout << "Nilai ilham = " << ilham << endl;
	raka = &ilham;
	amir = &raka;
	bob = &amir;
	
	cout << "Nilai Raka Hasil Mengakses Ilham = " << *raka << endl;
	cout << "Nilai Amir Hasil Mengakses Raka = " << **amir << endl;
	cout << "Nilai Bob Hasil Mengakses Amir = " << ***bob << endl;
}
