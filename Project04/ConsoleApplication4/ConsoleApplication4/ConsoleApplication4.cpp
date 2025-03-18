#include <iostream>
using namespace std;

//Girilen yazılı ortalamasını hesaplayarak ortalama 50′ den küçükse Kaldı, değilse Geçti yazdıran C++ kodları

int main()
{
	setlocale(LC_ALL, "Turkish");
	int sinav1, sinav2;
	double ortalama;
	cout << "1.Sayıyı Giriniz: ";
	cin >> sinav1;
	cout << "2.Sayıyı Giriniz: ";
	cin >> sinav2;
	ortalama = (sinav1 + sinav2) / 2;
	if (ortalama >= 50)
		cout << "Geçti: "<<ortalama;
	else
		cout << "Kaldı: "<<ortalama;
}
