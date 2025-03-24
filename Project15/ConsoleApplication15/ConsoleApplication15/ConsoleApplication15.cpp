#include <iostream>

using namespace std;

//1 ile Kullanýcýnýn girdiði sayýya kadar olan sayýlar içerisinde bulunan asal sayýlarý listeleyen C++ Kodlarý
int main()
{
	setlocale(LC_ALL, "Turkish");
	int sayi;
	cout << "Bir Sayýu Giriniz: ";
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