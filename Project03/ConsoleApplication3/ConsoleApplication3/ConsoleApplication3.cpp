#include <iostream>

using namespace std;

//Girilen 3 yaz�l� notunun ortalamas�n� hesaplayan ve g�steren C++ kodlar�

int main()
{
	setlocale(LC_ALL, "Turkish");
	double sayi1, sayi2, sayi3;
	double ortalama;
	cout << "1.Say�y� Giriniz: ";
	cin>>sayi1;
	cout << "2.Say�y� Giriniz: ";
	cin >> sayi2;
	cout << "3.Say�y� Giriniz: ";
	cin >> sayi3;
	ortalama = (sayi1 + sayi2 + sayi3) / 3;
	cout << "Girdi�iniz Say�lar�n Ortalamas�: " << ortalama;
}