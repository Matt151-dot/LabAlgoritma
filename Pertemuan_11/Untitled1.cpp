#include <iostream>
using namespace std;

int main() {
	int ilham, amir, *raka;
	ilham = 75;
	amir = ilham;
	raka = &ilham;
	cout << "Nilai Ilham = " << ilham << endl;
	cout << "Nilai Amir = " << amir << endl;
	cout << "Nilai Raka = " << *raka << endl;
	return 0;
}
//}

int main() {
	int yofrie = 93
	int *hadiansyah;
	cout << "Nilai awal yofrie = " << yofrie << endl;
	hadiansyah = &yofrie;
	cout << "Nilai hadiansyah sekarang = " << *hadiansyah << endl;
	*hadiansyah = 50;
	cout << "Nilai hadiansyah sekarang = " << *hadiansyah << endl;
	return 0;
}
