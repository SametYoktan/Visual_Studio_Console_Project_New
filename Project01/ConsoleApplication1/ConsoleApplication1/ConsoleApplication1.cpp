#include <iostream>
using namespace std; //bunu burda tan�mlamassak a�a��da her seferinde std yazmam�z gerekir
//Klavyeden girilen iki say�y� toplayan ve g�steren C++ kodlar�
int main()
{
	setlocale(LC_ALL, "Turkish"); //T�rk�e karakter girmemiz i�in bunu yazmam�z laz�m
	int sayi1, sayi2, toplam;
	cout << "1.Say�y� Giriniz: " << endl;
	cin >> sayi1;
	cout << "2.Say�y� Giriniz: " << '\n';
	cin >> sayi2;
	toplam = sayi1 + sayi2;
	cout << "Girdi�iniz Say�lar�n Toplam�: " << toplam;
}