// FUNGSI REKURSIF(fungsi yang memanggil dirinya sendiri)
#include <iostream>
using namespace std;

int factorial(int n)
{
	if (n == 1) return n;
	else return n * factorial(n - 1);
}


//5*4*3*2*1 = 120

int main()
{
	cout << factorial(5);
	return 0;
}
