#include <iostream>
using namespace std;

//Klavyeden girilen 2 say�n�n ortalamas�n� hesaplayan C++ kodlar�:

int main()
{
	setlocale(LC_ALL, "Turkish");
	int sayi1, sayi2, ortalama;
	cout << "1 Say�y� Girin: ";
	cin >> sayi1;
	cout << "2 Say�y� Girin: ";
	cin >> sayi2;
	ortalama = (sayi1 + sayi2) / 2;
	cout << "Girilen Say�lar�n Ortalamas�: " << ortalama;
}