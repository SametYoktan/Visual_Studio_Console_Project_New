#include <iostream>

using namespace std;

//Kullan�c�dan 10 tane say� alarak bu say�lar�n ortalamas�n� g�steren C++ Kodlar�
int main()
{
	setlocale(LC_ALL, "Turkish");
	int toplam = 0;
	int sayi;
	for (size_t i = 1; i <=10; i++)
	{
		cout << i << ". Say�y� Giriniz: ";
		cin >> sayi;
		toplam = toplam + sayi;
	}
	cout << "Girilen 10 Say�n�n Ortalamas�: " << toplam/10;
}