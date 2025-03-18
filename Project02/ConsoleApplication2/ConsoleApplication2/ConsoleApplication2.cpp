#include <iostream>
using namespace std;

//Klavyeden girilen 2 sayýnýn ortalamasýný hesaplayan C++ kodlarý:

int main()
{
	setlocale(LC_ALL, "Turkish");
	int sayi1, sayi2, ortalama;
	cout << "1 Sayýyý Girin: ";
	cin >> sayi1;
	cout << "2 Sayýyý Girin: ";
	cin >> sayi2;
	ortalama = (sayi1 + sayi2) / 2;
	cout << "Girilen Sayýlarýn Ortalamasý: " << ortalama;
}