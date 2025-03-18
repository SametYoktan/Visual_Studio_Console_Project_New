#include <iostream>

using namespace std;

//Girilen 3 yazýlý notunun ortalamasýný hesaplayan ve gösteren C++ kodlarý

int main()
{
	setlocale(LC_ALL, "Turkish");
	double sayi1, sayi2, sayi3;
	double ortalama;
	cout << "1.Sayýyý Giriniz: ";
	cin>>sayi1;
	cout << "2.Sayýyý Giriniz: ";
	cin >> sayi2;
	cout << "3.Sayýyý Giriniz: ";
	cin >> sayi3;
	ortalama = (sayi1 + sayi2 + sayi3) / 3;
	cout << "Girdiðiniz Sayýlarýn Ortalamasý: " << ortalama;
}