#include <iostream>

using namespace std;

//Kullanýcýdan 10 tane sayý alarak bu sayýlarýn ortalamasýný gösteren C++ Kodlarý
int main()
{
	setlocale(LC_ALL, "Turkish");
	int toplam = 0;
	int sayi;
	for (size_t i = 1; i <=10; i++)
	{
		cout << i << ". Sayýyý Giriniz: ";
		cin >> sayi;
		toplam = toplam + sayi;
	}
	cout << "Girilen 10 Sayýnýn Ortalamasý: " << toplam/10;
}