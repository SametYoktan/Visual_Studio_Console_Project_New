#include <iostream>

using namespace std;

//1 ile Kullan�c�n�n girdi�i say�ya kadar olan say�lar i�erisinde bulunan asal say�lar� listeleyen C++ Kodlar�
int main()
{
	setlocale(LC_ALL, "Turkish");
	int sayi;
	cout << "Bir Say�u Giriniz: ";
	cin >> sayi;

	for (int sayac = 2; sayac <= sayi; sayac++)
	{
		int asal, test;
		test = sayac;
		asal = 1;
		while (test-- > 2)
			if ((sayac % test) == 0)
				asal = 0;
		if (asal == 1)
			cout << sayac << " bir asal sayidir!\n";
	}
	return 0;
}