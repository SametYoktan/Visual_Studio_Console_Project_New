#include <iostream>

using namespace std;

//For D�ng�s� kullanarak kullan�c�dan 5 say� isteyen ve girilen bu say�lar�n toplam�n� ekranda g�steren C++ Kodlar�
int main()
{
	int toplam = 0;
	int sayi;
	setlocale(LC_ALL, "Turkish"); //T�rk�e karakter
	for (size_t i = 1; i <= 5; i++)
	{
		cout << i << ". Say�y� Giriniz: ";
		cin >> sayi;
		toplam = toplam + sayi;
	}
	cout << "Girilen 5 Say�n�n Toplam�: "<<toplam;
}