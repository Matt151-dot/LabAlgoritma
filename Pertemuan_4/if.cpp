#include <iostream>
using namespace std;
int main()
{
	double tot_beli, potongan = 0, jum_bayar = 0;
	//clrscr();
	cout << "Total Pembelian Rp. ";
	cin >> tot_beli;
	
	if (tot_beli >= 50000)
	{
		potongan = 0.2 * tot_beli;
		cout <<"Besarnya potongan RP."<<potongan<<endl;
		jum_bayar = tot_beli - potongan;
		cout<<"Jumlah yang harus dibayarkan RP."<<jum_bayar;
	}
	getchar();	
}
